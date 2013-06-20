# Created by: den
# $FreeBSD: ports/russian/unzip/Makefile,v 1.8 2012/11/17 06:00:56 svnexp Exp $

CATEGORIES=	russian archivers

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Unzip with CP866 and KOI8-R support

CONFLICTS=	unzip-[0-9]* unzip-iconv-[0-9]* zh-unzip-[0-9]* ko-unzip-[0-9]*

EXTRA_PATCHES=	${.CURDIR}/files/patch-ebcdic.h

MASTERDIR=	${.CURDIR}/../../archivers/unzip

.include "${MASTERDIR}/Makefile"
