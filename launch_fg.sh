#!/bin/sh

systemcpath="/home/parallels/Downloads/systemc-2.3.1"

clear
echo "Compilation Start"

# Change the name of the file
g++ -I$systemcpath/include -L$systemcpath/lib-linux64 -lsystemc hello.cpp -o hello

export LD_LIBRARY_PATH=$systemcpath/lib-linux64

echo "Program start"

./hello



