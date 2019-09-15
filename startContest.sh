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
    cat template >$1_A.cpp
    cat template >$1_B.cpp
    cat template >$1_C.cpp
    cat template >$1_D.cpp
    cat template >$1_E.cpp
    cat template >$1_F.cpp
