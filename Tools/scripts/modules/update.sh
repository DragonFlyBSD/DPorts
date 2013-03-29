#!/bin/sh

cd /g/hubgnats/gnats-aa/modules

make clean
make

diff=`diff modules-ports modules | wc | awk '{ print $1 }'`

echo Difference is $diff lines.

if [ $diff -gt 50 ]; then
	date | mail -s "DIFF > $diff" edwin@FreeBSD.org
	exit
fi

# Don't commit anything if only the $FreeBSD: Tools/scripts/modules/update.sh 300895 2012-07-14 12:56:14Z beat $ tag has changed
if [ $diff -ne 4 ]; then
	make commit
fi
