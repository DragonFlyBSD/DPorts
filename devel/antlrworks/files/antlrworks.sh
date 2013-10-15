#! /bin/sh
#
# $FreeBSD: devel/antlrworks/files/antlrworks.sh 300896 2012-07-14 13:54:48Z beat $

JAVA_VERSION="%%JAVA_VERSION%%" "%%LOCALBASE%%/bin/java" -classpath "%%JAVAJARDIR%%/%%PORTNAME%%.jar" org.antlr.works.IDE "$@"
 
