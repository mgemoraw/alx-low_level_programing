#!/bin/sh -e
gcc -c *.c 
ar rcs liball.a *.o
ranlib liball.a
