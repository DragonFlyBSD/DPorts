#!/bin/sh
#
# $FreeBSD: head/archivers/deb2targz/files/deb2targz.sh 514229 2019-10-10 13:56:20Z ak $
#
# Distributed under the BSD 2-clause Simplified License.
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

