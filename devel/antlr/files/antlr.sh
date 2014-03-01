#! /bin/sh
#
# $FreeBSD: head/devel/antlr/files/antlr.sh 340872 2014-01-24 00:14:07Z mat $

JAVA_VERSION="%%JAVA_VERSION%%" "%%LOCALBASE%%/bin/java" -classpath "%%JAVAJARDIR%%/antlr.jar" antlr.Tool "$@"
