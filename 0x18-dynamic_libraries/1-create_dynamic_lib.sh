#!/bin/bash
gcc *.c -fPIC -c
gc *.o -shared -o liball.so
