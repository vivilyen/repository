#!/bin/bash

echo 'Hello world!'

read -p "Your name: " name
echo "Hi, $name!"
printf "%s\n" "This is a line"

if [ "$name"=="Anna" ]; then
 echo "Hi, Anna!"
else
 echo "You're not Anna"
fi

if [ -f file.txt ]; then
 echo "The file already exists."
else
 echo "The file does not exist yet."
fi

for i in {1..5}; do
 echo "number: $i"
done

num=1
while [ $num -le 5 ]; do
 echo "number: $num"
 num=$((num+1))
done
