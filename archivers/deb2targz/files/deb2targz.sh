#!/bin/sh
#
# $FreeBSD: ports/archivers/deb2targz/files/deb2targz.sh,v 1.2 2012/11/17 05:54:20 svnexp Exp $
#

PATH=/bin:/usr/bin

[ $# -eq 0 ] && {
	echo 1>&2 "Usage: ${0##*/} <deb-file> [<deb-file> ...]";
	exit 1;
}

for i in "$@"; do
	[ "${i##*.}" != "deb" ] && {
		echo "${0##*/}: ignoring '$i' (not a .deb)";
		continue;
	}

	for file in `tar tf "$i"`; do
		[ "${file%%.*}" = "data" ] && {
			tar xOf "${i}" "${file}" > "${i%%.deb}.${file#data.}"
		}
	done
done

