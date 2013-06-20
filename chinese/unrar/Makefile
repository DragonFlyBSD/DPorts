# New ports collection makefile for:	zh-unrar
# Date created:			1 Auguest 2004
# Whom:				Shen Chuan-Hsing <statue@freebsd.sinica.edu.tw>
#
# $FreeBSD: ports/chinese/unrar/Makefile,v 1.13 2012/11/17 05:54:58 svnexp Exp $
#

CATEGORIES=	chinese

MAINTAINER=	sunpoet@FreeBSD.org

MASTERDIR=	${.CURDIR}/../../archivers/unrar

EXTRA_PATCHES=	${.CURDIR}/files/patch-arcread.cpp \
		${.CURDIR}/files/patch-unicode.cpp

CONFLICTS=	unrar-[0-9]* unrar-iconv-[0-9]*

.include "${MASTERDIR}/Makefile"
