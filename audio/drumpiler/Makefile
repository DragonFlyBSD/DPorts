# Created by: ijliao
# $FreeBSD: audio/drumpiler/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	drumpiler
PORTVERSION=	0.9.0
PORTREVISION=	5
CATEGORIES=	audio
MASTER_SITES=	SF

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Drum machine compiler

USE_SDL=	sdl
CFLAGS+=	`${SDL_CONFIG} --cflags` -Wno-return-type
LIBS+=		`${SDL_CONFIG} --libs`
PLIST_FILES=	bin/drumpiler

do-build:
	cd ${WRKSRC} && ${CC} ${CFLAGS} -DUSESDL -o drumpiler drumpiler.c ${LIBS}

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/drumpiler ${STAGEDIR}${PREFIX}/bin

.include <bsd.port.mk>
