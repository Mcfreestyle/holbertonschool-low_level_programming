#!/bin/bash
gcc -fno-pie -c *.c
ar -rc liball.a *.o
ranlib liball.a
