# Created by: Shen Chuan-Hsing <statue@freebsd.sinica.edu.tw>
# $FreeBSD: chinese/unrar/Makefile 325466 2013-08-27 16:24:56Z sunpoet $

CATEGORIES=	chinese

MAINTAINER=	sunpoet@FreeBSD.org

MASTERDIR=	${.CURDIR}/../../archivers/unrar

EXTRA_PATCHES=	${.CURDIR}/files/patch-arcread.cpp \
		${.CURDIR}/files/patch-unicode.cpp

CONFLICTS=	unrar-[0-9]* unrar-iconv-[0-9]*

.include "${MASTERDIR}/Makefile"
