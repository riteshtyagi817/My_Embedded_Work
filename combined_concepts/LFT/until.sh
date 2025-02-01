#!/bin/bash


ntry_max=4 ; ntry=0 ; password=''

until [[ $ntry -ge $ntry_max ]] ; do
	ntry=$(( $ntry + 1))
	echo -n 'Give Password: '
	read password
	if [[ $password == "linux" ]] ; then
		echo "Congratulations yoiu gave the right password on try $ntry!"
		exit 0
	fi
	echo "you failed on try $ntry: try again!"
done
echo " You tried $ntry_max: times;giving up"
exit -1
