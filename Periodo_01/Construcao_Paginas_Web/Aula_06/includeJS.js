let INPUT_ELEMENT = document.getElementById("meuInput");

function dentro() {
  if (INPUT_ELEMENT !== null) {
    INPUT_ELEMENT.style.background = "green";
  }
}

function fora() {
  if (INPUT_ELEMENT !== null) {
    INPUT_ELEMENT.style.background = "yellow";
  }
}
