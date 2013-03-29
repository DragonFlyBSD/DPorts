#!/bin/sh
# $FreeBSD: Tools/scripts/pkg-stash/pkg-list.sh 300895 2012-07-14 12:56:14Z beat $

for i in . `make all-depends-list`; do
	cd $i && [ -f "`make -V PKGFILE`" ] && make -V PKGFILE
done
