#!/bin/bash
count=$1
val=0
while [[ $val -le $count ]] do
	./client &
	val=$(($val+1))
done
