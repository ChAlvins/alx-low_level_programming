#!/bin/bash
gcc 100-test.c -c -fPIC
gcc 100-test.o -shared -o 100-operations.so
