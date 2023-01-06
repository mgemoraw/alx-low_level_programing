#!/bin/bash
gcc -c -Wall -Pedantic -Werror -Wextra *.c
ar rcs liball.a *.o
ranlib liball.a
