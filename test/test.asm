
section .data
msg1        db      'Please enter your name: ', 0h      ; Variável pedindo pelo input do usuário
msg2        db      'Hello, ', 0h                       ; Variável usada para cumprimentar o usuário
 
section .bss
sinput:     resb    8                                   ; Reserva um espaço de 8 bytes na memória para entrada de dados.
 
section .text
global  _start
 
_start:
 
    mov     eax, msg1       ; move nosso prompt de pergunta para EAX
    call    sprint          ; chama nossa função de print
 
    mov     edx, 8          ; numero de bytes para ler
    mov     ecx, sinput     ; nosso buffer
    mov     ebx, 0          ; lê entrada do StdIn
    mov     eax, 3          ; chama SYS_READ
    int     80h             ; chama o kernel para performar a operação
 
    mov     eax, msg2       ; move nossa mensagem de apresentação para EAX
    call    sprint          ; chama nossa função de print
 
    mov     eax, sinput     ; move nosso buffer para EAX (a string contém um linefeed)
    call    sprint          ; chama nossa função de print
 
    call    quit            ; chama nossa função de saida

;==================================

;------------------------------------------
; int slen(String message)
; String length calculation function
slen:
    push    ebx         ; Empurra quaisquer valor guardado em EBX para a STACK
    mov     ebx, eax    ; move o endereço em EBX para EAX, ambos agora apontam para o mesmo seguimento na memória.
 
nextchar:
    cmp     byte [eax], 0
    jz      finished
    inc     eax
    jmp     nextchar
 
finished:
    sub     eax, ebx
    pop     ebx
    ret
 
 
;------------------------------------------
; void sprint(String message)
; String printing function
sprint:
    push    edx
    push    ecx
    push    ebx
    push    eax
    call    slen
 
    mov     edx, eax    ; move o numero de bytes calculados por slen para EDX
    pop     eax         ; retorna nossa mensagem da STACK
 
    mov     ecx, eax    ; move nossa mensagem para ECX
    mov     ebx, 1      ; indica o arquivo de saida para StdOut
    mov     eax, 4      ; chama o código de operação do kernel (SYS_WRITE)
    int     80h         ; chama o kernel para performar a operação
 
    pop     ebx
    pop     ecx
    pop     edx
    ret
 
 
;------------------------------------------
; void sprintLF(String message)
; String printing with line feed function
sprintLF:
    call    sprint
 
    push    eax         ; push eax onto the stack to preserve it while we use the eax register in this function
    mov     eax, 0Ah    ; move 0Ah into eax - 0Ah is the ascii character for a linefeed
    push    eax         ; push the linefeed onto the stack so we can get the address
    mov     eax, esp    ; move the address of the current stack pointer into eax for sprint
    call    sprint      ; call our sprint function
    pop     eax         ; remove our linefeed character from the stack
    pop     eax         ; restore the original value of eax before our function was called
    ret                 ; return to our program
 
 
;==============================================================================
; void exit()
; Sai do programa e restaura recursos.

quit:
    mov     ebx, 0      ; Indica o código de saida 0 - "Sem erros"
    mov     eax, 1      ; Indica o código de operação do kernel SYS_EXIT
    int     80h         ; Chama o kernel para performar a operação
    ret                 ; retorna de nossa função (sub-rotina)














;_start:
; 
;    mov     ebx, msg        ; move the address of our message string into EBX
;    mov     eax, ebx        ; move the address in EBX into EAX as well (Both now point to the same segment in memory)
; 
;nextchar:
;    cmp     byte [eax], 0   ; compare the byte pointed to by EAX at this address against zero (Zero is an end of string delimiter)
;    jz      finished        ; jump (if the zero flagged has been set) to the point in the code labeled 'finished'
;    inc     eax             ; increment the address in EAX by one byte (if the zero flagged has NOT been set)
;    jmp     nextchar        ; jump to the point in the code labeled 'nextchar'
; 
;finished:
;    sub     eax, ebx        ; subtract the address in EBX from the address in EAX
;                            ; remember both registers started pointing to the same address (see line 15)
;                            ; but EAX has been incremented one byte for each character in the message string
;                            ; when you subtract one memory address from another of the same type
;                            ; the result is number of segments between them - in this case the number of bytes
; 
;    mov     edx, eax        ; EAX now equals the number of bytes in our string
;    mov     ecx, msg        ; the rest of the code should be familiar now
;    mov     ebx, 1
;    mov     eax, 4
;    int     80h
; 
;    mov     ebx, 0
;    mov     eax, 1
;    int     80h




; SECTION .data
; msg     db      'Hello, brave new world!', 0Ah
;  
; SECTION .text
; global  _start
;  
; _start:
;  
;     mov     eax, msg        ; move the address of our message string into EAX
;     call    strlen          ; call our function to calculate the length of the string
;  
;     mov     edx, eax        ; our function leaves the result in EAX
;     mov     ecx, msg        ; this is all the same as before
;     mov     ebx, 1
;     mov     eax, 4
;     int     80h
;  
;     mov     ebx, 0
;     mov     eax, 1
;     int     80h
;  
; strlen:                     ; this is our first function declaration
;     push    ebx             ; push the value in EBX onto the stack to preserve it while we use EBX in this function
;     mov     ebx, eax        ; move the address in EAX into EBX (Both point to the same segment in memory)
;  
; nextchar:                   ; this is the same as lesson3
;     cmp     byte [eax], 0
;     jz      finished
;     inc     eax
;     jmp     nextchar
;  
; finished:
;     sub     eax, ebx
;     pop     ebx             ; pop the value on the stack back into EBX
;     ret                     ; return to where the function was called



NULL terminating bytes
Ok so why did our second message print twice when we only called our sprint function on msg2 once? Well actually it did only print once. You can see what I mean if you comment out our second call to sprint. The output will be both of our message strings.

But how is this possible?

What is happening is we weren't properly terminating our strings. In assembly, variables are stored one after another in memory so the last byte of our msg1 variable is right next to the first byte of our msg2 variable. We know our string length calculation is looking for a zero byte so unless our msg2 variable starts with a zero byte it keeps counting as if it's the same string (and as far as assembly is concerned it is the same string). So we need to put a zero byte or 0h after our strings to let assembly know where to stop counting.

Note: In programming 0h denotes a null byte and a null byte after a string tells assembly where it ends in memory.

; Hello World Program (NULL terminating bytes)
; Compile with: nasm -f elf helloworld-inc.asm
; Link with (64 bit systems require elf_i386 option): ld -m elf_i386 helloworld-inc.o -o helloworld-inc
; Run with: ./helloworld-inc
 
%include        'functions.asm'
 
SECTION .data
msg1    db      'Hello, brave new world!', 0Ah, 0h          ; NOTE the null terminating byte
msg2    db      'This is how we recycle in NASM.', 0Ah, 0h  ; NOTE the null terminating byte
 
SECTION .text
global  _start
 
_start:
 
    mov     eax, msg1
    call    sprint
 
    mov     eax, msg2
    call    sprint
 
    call    quit


Introduction to the .bss section
So far we've used the .text and .data section so now it's time to introduce the .bss section. BSS stands for BLOCK Started by Symbol. It is an area in our program that is used to reserve space in memory for uninitialised variables. We will use it to reserve some space in memory to hold our user input since we don't know how many bytes we'll need to store.

The syntax to declare variables is as follows:

.bss section example
SECTION .bss
variableName1:      RESB    1       ; reserve space for 1 byte
variableName2:      RESW    1       ; reserve space for 1 word
variableName3:      RESD    1       ; reserve space for 1 double word
variableName4:      RESQ    1       ; reserve space for 1 double precision float (quad word)
variableName5:      REST    1       ; reserve space for 1 extended precision float














