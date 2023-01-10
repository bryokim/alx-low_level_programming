#!/bin/bash
ar rc liball.a `gcc -c *.c | find . -name "*.o"` && rm *.o
