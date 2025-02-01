#!/bin/sh

echo "Do you want to destroy your entire file system?"
read response


case "$response" in
	"yes") echo "I hope you know what you are doing";;
	"no") echo "you have some common sense";;
	"y" | "Y" | "YES" ) echo "I hope you know what you are doing";
		echo 'I am going to type: "rm -rf /"';;
	"n" | "N" | "NO") echo "you have some common sense!";;
	* ) echo "you have to give an answer!" ;;
esac
exit 0

