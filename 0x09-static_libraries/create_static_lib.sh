#!/bin/bash
gcc -g -c .*c -o liball.o
ar rc liball.a liball.o
