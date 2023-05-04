#!bin/bash

function listen {
    while [[ $INPUT != "e" ]]
    do
    read -s -n 1 INPUT;
    echo $INPUT > data.txt;
        if [ $INPUT == "e" ]
        then
            echo "It is finished";
            break;
        fi;
    done;

} 
./main & listen