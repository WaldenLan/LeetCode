#!/bin/bash

# cnt=0

# while read L
# do
#     if [[ $cnt -eq 10 ]]; then
#         echo $L
#     fi
#     cnt=`expr $cnt + 1`
# done < "file.txt"

# cnt=`expr $cnt + 1`
# if [[ $cnt -eq 10 ]]; then
#     echo $L
# fi

awk "NR == 10" "file.txt"