#!/bin/bash
num=$1
while [ $num -gt 0 ]
do
	./add &
	num=$(($num-1))


done
