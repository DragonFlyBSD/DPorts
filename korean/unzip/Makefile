# Ports collection makefile for:  ko-unzip
# Date created:		21 May 2003
# Whom:			Hye-Shik Chang
#
# $FreeBSD: ports/korean/unzip/Makefile,v 1.7 2012/11/17 05:58:47 svnexp Exp $

CATEGORIES=	korean archivers

MAINTAINER=	ports@FreeBSD.org
COMMENT=	ZIP archive extractor with localized patches

CONFLICTS=	unzip-[0-9]* unzip-iconv-[0-9]* ru-unzip-[0-9]* zh-unzip-[0-9]*

EXTRA_PATCHES=	${.CURDIR}/files/patch-*
MASTERDIR=	${.CURDIR}/../../archivers/unzip

.include "${MASTERDIR}/Makefile"
