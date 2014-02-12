#!/bin/sh
#
# $FreeBSD: head/textproc/jaxup/files/jaxup-xupdater.sh 340872 2014-01-24 00:14:07Z mat $

JAVA_VERSION="%%JAVA_VERSION%%" %%LOCALBASE%%/bin/java -cp "`"%%LOCALBASE%%/bin/classpath"`:%%DATADIR%%/jaxup-xupdater.jar" "DOMXUpdater" "$@"
