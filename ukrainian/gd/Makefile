# Created by: mike@LITech.lviv.ua
# $FreeBSD: ukrainian/gd/Makefile 327774 2013-09-20 23:19:33Z bapt $

MASTERDIR=	${.CURDIR}/../../graphics/gd
CATEGORIES=	ukrainian

MAINTAINER=	mi@aldan.algebra.com
COMMENT=	A graphics library for fast image creation with KOI8-U support

BUILD_DEPENDS=  ${NONEXISTENT}:${PORTSDIR}/x11-fonts/geminifonts:fetch
GD_FONTS=	${DISTDIR}/x-koi8u.tgz koi6x10.bdf koi6x13.bdf \
		koi10x16b.bdf koi9x15.bdf koi10x20.bdf

NO_STAGE=	yes
.include "${MASTERDIR}/Makefile"
