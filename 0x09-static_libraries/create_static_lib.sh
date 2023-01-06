#!/bin/bash -e
gcc -c -Wall -Werror -Wextra -pedantic -L. *.c 
ar rcs liball.a *.o
ranlib liball.a
