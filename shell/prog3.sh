#!/bin/bash

my_file="prog2.sh"

for var in $(cat $my_file); do
	echo " $var"
done
