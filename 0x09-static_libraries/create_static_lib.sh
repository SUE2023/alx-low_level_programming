#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -C liball.a*.c -L. -lall -o liball 
ar -rcs liball.a *.o 
ranlib liball.a
