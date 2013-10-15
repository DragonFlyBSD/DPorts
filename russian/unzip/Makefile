# Created by: den
# $FreeBSD: russian/unzip/Makefile 327766 2013-09-20 22:46:16Z bapt $

CATEGORIES=	russian archivers

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Unzip with CP866 and KOI8-R support

CONFLICTS=	unzip-[0-9]* unzip-iconv-[0-9]* zh-unzip-[0-9]* ko-unzip-[0-9]*

EXTRA_PATCHES=	${.CURDIR}/files/patch-ebcdic.h

MASTERDIR=	${.CURDIR}/../../archivers/unzip

NO_STAGE=	yes
.include "${MASTERDIR}/Makefile"
