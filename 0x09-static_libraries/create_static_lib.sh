#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -c *.c 
ar -rcs liball*.o 
ranlib liball.a
