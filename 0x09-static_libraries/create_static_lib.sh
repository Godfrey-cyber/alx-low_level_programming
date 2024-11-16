#!/bin/bash

# Compile all .c files to object files
gcc -c *.c

# Create the static library from all object files
ar rcs liball.a *.o
