#!/bin/bash

# Compile all .c files into a dynamic library named liball.so
gcc -shared -fPIC -o liball.so *.c
