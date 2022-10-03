#!/bin/bash
gcc -c -o  *.c
gcc -shared liball.so *.o
