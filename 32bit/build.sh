#!/bin/bash
../build_mingw32 && make win-nsi
echo
echo -ne "\033[33m ########################################################\033[0m \n"
echo -ne "\033[33m # Please copy the \"`ls | grep *.exe`\" file.	#\033[0m \n"
echo -ne "\033[33m ########################################################\033[0m \n"
echo
