#! /bin/sh
#
# $FreeBSD: ports/devel/antlrworks/files/antlrworks.sh,v 1.2 2012/11/17 05:55:33 svnexp Exp $

JAVA_VERSION="%%JAVA_VERSION%%" "%%LOCALBASE%%/bin/java" -classpath "%%JAVAJARDIR%%/%%PORTNAME%%.jar" org.antlr.works.IDE "$@"
 
