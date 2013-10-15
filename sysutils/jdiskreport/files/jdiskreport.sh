#! /bin/sh
# $FreeBSD: sysutils/jdiskreport/files/jdiskreport.sh 300897 2012-07-14 14:29:18Z beat $
JDISKDIR="%%JDISKDIR%%"
JAVAVM="%%JAVAVM%%"
PORTVERSION="%%PORTVERSION%%"

$JAVAVM -jar "$JDISKDIR/jdiskreport-$PORTVERSION.jar"
