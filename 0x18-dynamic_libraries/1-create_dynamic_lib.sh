#!/bin/bash
gcc -c -fpic *.c -o *.o
gcc -shared *.o -o liball.so
