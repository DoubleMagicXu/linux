#!/bin/bash
for((i=1;i<10;++i))
{
     for((j=1;j<=i;++j))
    {
        let k=i*j;
        echo -e "$i*$j=$k\t\c"
    }
    echo -e "\n"
}
