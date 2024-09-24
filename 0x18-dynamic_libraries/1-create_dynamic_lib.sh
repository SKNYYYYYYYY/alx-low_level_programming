#!/bin/bash
gcc -o *.c
gcc -shared -o liball.so *.o
