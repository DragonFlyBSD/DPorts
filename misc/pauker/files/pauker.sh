#!/bin/sh
#
# $FreeBSD: ports/misc/pauker/files/pauker.sh,v 1.2 2012/11/17 05:59:43 svnexp Exp $

"%%LOCALBASE%%/bin/java" -jar "%%JAVAJARDIR%%/%%PORTNAME%%.jar" "$@"
