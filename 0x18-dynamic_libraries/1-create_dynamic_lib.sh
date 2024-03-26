#!/bin/bash
gcc -c -fPIC *.c
gcc -shared -o liball.so *.o
gcc -shared -o liball.so -l. *.o
