#!/bin/bash

cd /home/vsa/ide/codes
pio run
pio run -t upload



cd /home/vsa/ide
pdflatex Assig.tex
xdg-open Assig.pdf
 
#cd /home/shashi/Avr-gcc
#make clean
#make





