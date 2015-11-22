#!/bin/sh

set -e

if [ "$#" -eq 0 ] || [ "$#" -gt 2 ]; then
  echo "Usage: $(basename $0) fw.bin [module_prefix]"
  exit 1
fi

MOD_PREFIX="edidfw"

if [ ! -f $1 ]; then
   echo "File $1 does not exist"
   exit 1
fi

if [ "$#" -eq 2 ]; then
MOD_PREFIX=$2
fi

WORKDIR=$(mktemp -d)
CURDIR=$PWD

FWFILE=$(basename $1)
MODNAME=${MOD_PREFIX}_$(basename $1 .bin)

echo "KMOD=	${MODNAME}" > 			$WORKDIR/Makefile
echo "FIRMWS=	${FWFILE}:${MODNAME}" >>	$WORKDIR/Makefile
echo ".include <bsd.kmod.mk>" >>		$WORKDIR/Makefile

cp -v "$1" $WORKDIR/$FWFILE

(cd $WORKDIR && make)

cp -v $WORKDIR/$MODNAME.ko $CURDIR/
