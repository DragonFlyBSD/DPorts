# Created by: KOMATSU Shinichiro <koma2@lovepeers.org>
# $FreeBSD: archivers/unzip-iconv/Makefile 327699 2013-09-20 13:11:20Z bapt $

PKGNAMESUFFIX=	-iconv

MAINTAINER=	koma2@lovepeers.org
COMMENT=	Unzip with iconv patches

CONFLICTS=	unzip-[0-9]* ko-unzip-[0-9]* ru-unzip-[0-9]* zh-unzip-[0-9]*

NO_STAGE=	yes
MASTERDIR=	${.CURDIR}/../unzip

WITH_ICONV=	yes

.include "${MASTERDIR}/Makefile"
