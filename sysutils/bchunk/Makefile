# Created by: bsdx
# $FreeBSD: sysutils/bchunk/Makefile 327772 2013-09-20 23:05:58Z bapt $

PORTNAME=	bchunk
PORTVERSION=	1.2.0
CATEGORIES=	sysutils
MASTER_SITES=	http://he.fi/bchunk/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Converts .bin/.cue files to .iso/audio

MAN1=		bchunk.1
PLIST_FILES=	bin/bchunk

NO_STAGE=	yes
do-build:
	cd ${WRKSRC}; ${CC} ${CFLAGS} bchunk.c -o bchunk

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/bchunk ${PREFIX}/bin
	${INSTALL_MAN} ${WRKSRC}/bchunk.1 ${MANPREFIX}/man/man1

.include <bsd.port.mk>
