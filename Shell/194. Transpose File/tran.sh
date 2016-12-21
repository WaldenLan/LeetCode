#!/bin/bash

read l < "file.txt"
cnt=0
for i in $l;
do
    cnt=`expr $cnt + 1`
done    

k=0

echo $cnt

cont=$(cat "file.txt")
for line in $cont; 
do
    # echo $line

    k=`expr $k + 1`
done