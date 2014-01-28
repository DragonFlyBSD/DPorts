# Created by: mike@LITech.lviv.ua
# $FreeBSD: ukrainian/gd/Makefile 340722 2014-01-22 17:00:46Z mat $

MASTERDIR=	${.CURDIR}/../../graphics/gd
CATEGORIES=	ukrainian

MAINTAINER=	mi@aldan.algebra.com
COMMENT=	A graphics library for fast image creation with KOI8-U support

BUILD_DEPENDS=  ${NONEXISTENT}:${PORTSDIR}/x11-fonts/geminifonts:fetch
GD_FONTS=	${DISTDIR}/x-koi8u.tgz koi6x10.bdf koi6x13.bdf \
		koi10x16b.bdf koi9x15.bdf koi10x20.bdf

NO_STAGE=	yes
.include "${MASTERDIR}/Makefile"
