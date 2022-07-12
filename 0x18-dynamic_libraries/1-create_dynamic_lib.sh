#!/bin/bash
gcc -c -fPIC *c
gc *.c -shared -o liball.so
