#!/bin/bash -e
gcc -c *.c
ar crs liball.a *.o
ranlib liball.a
