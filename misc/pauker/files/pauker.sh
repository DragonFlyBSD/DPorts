#!/bin/sh
#
# $FreeBSD: misc/pauker/files/pauker.sh 300896 2012-07-14 13:54:48Z beat $

"%%LOCALBASE%%/bin/java" -jar "%%JAVAJARDIR%%/%%PORTNAME%%.jar" "$@"
