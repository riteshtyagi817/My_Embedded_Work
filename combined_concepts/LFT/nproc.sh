#!/bin/bash
nproc=$(ps | wc -l)
#nproc=$(($nproc -1))
nproc=$(expr $nproc - 1 )
echo "You are running $nproc processes"
echo "You are running $( expr $(ps | wc -l) - 1 ) processes"
echo "You are running $(( $(ps | wc -l) - 1 )) processes"
exit 0

