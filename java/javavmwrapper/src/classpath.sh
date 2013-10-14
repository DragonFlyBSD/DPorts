#!/bin/sh
#
# $FreeBSD: java/javavmwrapper/src/classpath.sh 300896 2012-07-14 13:54:48Z beat $
#

JAVALIBDIR=%%JAVALIBDIR%%

echo -n .
find -s ${JAVALIBDIR} -name '*.jar' | while read jar ; do
	echo -n ":${jar}"
done
