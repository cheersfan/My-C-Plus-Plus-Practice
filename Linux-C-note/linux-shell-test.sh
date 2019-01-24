#!/bin/bash
echo "Please input a filename:"
read filename
echo $filename
echo "by tesPlease input a filename2:\n"
read filename2
echo $filename2

echo "equal or not:"
if [ "$filename" == "$filename2" ] 
then	echo "equal"
else
	echo "not"
fi

