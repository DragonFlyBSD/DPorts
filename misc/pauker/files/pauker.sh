#!/bin/sh
#
# $FreeBSD: misc/pauker/files/pauker.sh 340872 2014-01-24 00:14:07Z mat $

"%%LOCALBASE%%/bin/java" -jar "%%JAVAJARDIR%%/%%PORTNAME%%.jar" "$@"
