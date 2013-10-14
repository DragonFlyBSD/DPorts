# Created by: Albert Vernon <f3cun3c02@sneakemail.com>
# $FreeBSD: archivers/lzlib/Makefile 328397 2013-09-26 17:29:29Z delphij $

PORTNAME=	lzlib
PORTVERSION=	1.5
CATEGORIES=	archivers
MASTER_SITES=	SAVANNAH/lzip

MAINTAINER=	delphij@FreeBSD.org
COMMENT=	In-memory LZMA compression and decompression library

PLIST_FILES=	include/lzlib.h \
		lib/liblz.a

NO_STAGE=		yes
USES=		gmake
GNU_CONFIGURE=	yes
MAKE_ARGS=	${MAKE_ENV}
INFO=		lzlib

.include <bsd.port.mk>
