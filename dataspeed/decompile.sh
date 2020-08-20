#!/bin/sh

retdec=~/Downloads/retdec/bin/retdec-decompiler.py

for file in $*; do
    $retdec -a pic32 -e little $file
    python unsigned.py $file.c > $(basename $file .hex).c
done
