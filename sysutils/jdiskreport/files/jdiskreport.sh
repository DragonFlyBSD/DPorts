#! /bin/sh
# $FreeBSD: ports/sysutils/jdiskreport/files/jdiskreport.sh,v 1.3 2012/11/17 06:01:35 svnexp Exp $
JDISKDIR="%%JDISKDIR%%"
JAVAVM="%%JAVAVM%%"
PORTVERSION="%%PORTVERSION%%"

$JAVAVM -jar "$JDISKDIR/jdiskreport-$PORTVERSION.jar"
