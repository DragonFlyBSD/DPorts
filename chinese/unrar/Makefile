# Created by: Shen Chuan-Hsing <statue@freebsd.sinica.edu.tw>
# $FreeBSD: chinese/unrar/Makefile 327713 2013-09-20 16:01:22Z bapt $

CATEGORIES=	chinese

MAINTAINER=	sunpoet@FreeBSD.org

MASTERDIR=	${.CURDIR}/../../archivers/unrar

EXTRA_PATCHES=	${.CURDIR}/files/patch-arcread.cpp \
		${.CURDIR}/files/patch-unicode.cpp

CONFLICTS=	unrar-[0-9]* unrar-iconv-[0-9]*

NO_STAGE=	yes
.include "${MASTERDIR}/Makefile"
