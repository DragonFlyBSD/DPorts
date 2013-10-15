# Created by: Hye-Shik Chang
# $FreeBSD: korean/unzip/Makefile 327739 2013-09-20 19:49:59Z bapt $

CATEGORIES=	korean archivers

MAINTAINER=	ports@FreeBSD.org
COMMENT=	ZIP archive extractor with localized patches

CONFLICTS=	unzip-[0-9]* unzip-iconv-[0-9]* ru-unzip-[0-9]* zh-unzip-[0-9]*

EXTRA_PATCHES=	${.CURDIR}/files/patch-*
MASTERDIR=	${.CURDIR}/../../archivers/unzip

NO_STAGE=	yes
.include "${MASTERDIR}/Makefile"
