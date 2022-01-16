#!/bin/bash
make brut
make gen
make wzo

for ((i = 1; i>0; i++))
do
    echo $i > seed
    ./gen < seed > gen.out
    ./brut < gen.out > brut.out
    ./wzo < gen.out > wzo.out

    if cmp -s "brut.out" "wzo.out"; 
    then
        echo  -ne "\e[1;32m$i OK\e[0m! \r"
    else
        echo -e "\e[31mWrong wzo at $i!\e[0m"
        break
    fi

done