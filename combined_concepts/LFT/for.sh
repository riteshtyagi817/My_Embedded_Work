#!/bin/bash

for file in $(find . -name "*.o")
do
	echo "I am removing file: $file"
	rm -f "$file"
done

