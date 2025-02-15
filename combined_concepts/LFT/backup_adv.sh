#!/bin/bash

StripDotSlash(){
result=""
for names in $1 ; do
	result="$result $(basename $names)"
	done
echo $result
}
GetFileNames(){

	StripDotSlash "$(find . -maxdepth 1 -not -type d )"
}
GetDirNames(){

	StripDotSlash "$(find . -maxdepth 1 -mindepth 1 -type d)"
}
DoDir(){

	local dirnames filenames R_SOURCE R_TARGET
	DIRNO=$(( $DIRNO + 1))
	cd $1
	echo "DIRNO=$DIRNO SOURCEDIR=$1 TARGETDIR=$2"
	dirnames=$(GetDirNames)
	filenames=$(GetFileNames)
	if [[ -n $filenames ]]; then
		tar -zcf $2/Backup.tar.gz $filenames
	fi
	for R_SOURCE in $dirnames;do
		R_TARGET=$2/$R_SOURCE
		mkdir -p $R_TARGET
		DoDir $1/$R_SOURCE $R_TARGET
	done


}
#############################################################
SOURCE=$1
TARGET=$2


#make sure the directory is a full path name

if ! [[ $(echo "$TARGET" | grep ^\/) ]] ; then
	echo -n TARGET was $TARGET: after adding full path:
	TARGET=$(pwd)\/$TARGET
	echo TARGET now is $TARGET
fi
DIRNO=0
Usage="Usage: Backup Source Target"

if [[ $# -lt 2 ]]; then
	echo -e '\n' $Usage '\n'
	exit 1
fi

if ! [[ -d $1 ]]; then
	echo -e '\n' Error:First argument must be directory that exits:quitting'\n'
	exit 1
fi

mkdir -p $TARGET

DoDir $SOURCE $TARGET
echo "Backup successfully done"
exit 0
###################################################################################

