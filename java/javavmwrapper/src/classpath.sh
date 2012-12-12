#!/bin/sh
#
# $FreeBSD: ports/java/javavmwrapper/src/classpath.sh,v 1.3 2012/11/17 05:58:43 svnexp Exp $
#

JAVALIBDIR=%%JAVALIBDIR%%

echo -n .
find -s ${JAVALIBDIR} -name '*.jar' | while read jar ; do
	echo -n ":${jar}"
done
