# New ports collection makefile for:	zh-unzip
# Date created:			3 July 1999
# Whom:				Shen Chuan-Hsing <statue@freebsd.sinica.edu.tw>
#
# $FreeBSD: ports/chinese/unzip/Makefile,v 1.8 2012/11/17 05:54:58 svnexp Exp $
#

CATEGORIES=	chinese

MAINTAINER=	ports@FreeBSD.org

CONFLICTS=	unzip-[0-9]* unzip-iconv-[0-9]* ko-unzip-[0-9]* ru-unzip-[0-9]*

MASTERDIR=	${.CURDIR}/../../archivers/unzip

EXTRA_PATCHES=	${.CURDIR}/files/patch-fileio.c

.include "${MASTERDIR}/Makefile"
