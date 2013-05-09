#!/bin/sh
#
# $FreeBSD: textproc/jaxup/files/jaxup-xupdater.sh 300897 2012-07-14 14:29:18Z beat $

JAVA_VERSION="%%JAVA_VERSION%%" %%LOCALBASE%%/bin/java -cp "`"%%LOCALBASE%%/bin/classpath"`:%%DATADIR%%/jaxup-xupdater.jar" "DOMXUpdater" "$@"
