#!/bin/bash

greet() {
 echo "Hi, $1!"
}
greet "Vivi"

for file in *.txt; do
 cp "$file" backup_"$file"
done
