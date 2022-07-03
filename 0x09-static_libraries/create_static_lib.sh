#!/bin/bash

for f in *.c
do
	gcc -c $f ./${f%.o}
done
ar rc liball.a *.o
