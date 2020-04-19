#!/bin/bash

#########################################################
#
# startContest.sh
#   
#   2019.09.15
#
#########################################################

    COMMAND=$(basename "$0")

    [[ $1 == "" ]] && echo "コンテスト名を入力してください(例: ABC140)" && exit 1;
    cat template >A_$1.cpp
    cat template >B_$1.cpp
    cat template >C_$1.cpp
    cat template >D_$1.cpp
    cat template >E_$1.cpp
    cat template >F_$1.cpp
