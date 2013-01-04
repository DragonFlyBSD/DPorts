#!/bin/sh
#
# $FreeBSD: ports/textproc/jaxup/files/jaxup-xupdater.sh,v 1.3 2012/11/17 06:02:00 svnexp Exp $

JAVA_VERSION="%%JAVA_VERSION%%" %%LOCALBASE%%/bin/java -cp "`"%%LOCALBASE%%/bin/classpath"`:%%DATADIR%%/jaxup-xupdater.jar" "DOMXUpdater" "$@"
