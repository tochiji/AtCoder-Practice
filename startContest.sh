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
    cat template.cpp >A_$1.cpp
    cat template.cpp >B_$1.cpp
    cat template.cpp >C_$1.cpp
    cat template.cpp >D_$1.cpp
    cat template.cpp >E_$1.cpp
    cat template.cpp >F_$1.cpp
