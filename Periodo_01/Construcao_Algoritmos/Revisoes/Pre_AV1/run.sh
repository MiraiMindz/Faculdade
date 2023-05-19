#!/usr/bin/env bash

if [[ ! -e $(which gcc) ]]; then
    exit
fi

if [[ ! -e $(which portugol-console) ]]; then
    exit
fi

clear

fullfile=$1
filenamepath=$(basename -- "$fullfile")
directory=$(dirname -- "$fullfile")
filename="${filenamepath%.*}"
extension="${filenamepath##*.}"

if [[ $extension == "c" ]]; then
    gcc -o "${directory}/${filename}" $fullfile
    ./$directory/$filename
    rm "${directory}/${filename}"
else
    portugol-console $fullfile
fi