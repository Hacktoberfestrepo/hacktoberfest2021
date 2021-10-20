#!/bin/bash

g++ $1.cpp -o $1.o && ./$1.o

/bin/rm -f $1.o
