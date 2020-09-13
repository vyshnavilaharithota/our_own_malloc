#!/bin/bash
rm -f main main.o mem.o
gcc -c -w -ggdb3 mem.c
gcc -c -w -ggdb3 main.c 
gcc -o main main.o mem.o
./main




