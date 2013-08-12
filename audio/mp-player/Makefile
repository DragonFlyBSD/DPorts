# Created by: Emanuel Haupt <ehaupt@critical.ch>
# $FreeBSD: audio/mp-player/Makefile 323578 2013-07-24 08:19:07Z ehaupt $

PORTNAME=	mp-player
PORTVERSION=	0.6
CATEGORIES=	audio
MASTER_SITES=	CRITICAL

MAINTAINER=	ehaupt@FreeBSD.org
COMMENT=	Curses based module tracker using libmikmod

LICENSE=	GPLv2

LIB_DEPENDS=	mikmod.2:${PORTSDIR}/audio/libmikmod

CFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib -lmikmod ${PTHREAD_LIBS} -lncurses -lpanel
DEFINES=	-D_REENTRANT

PLIST_FILES=	bin/mp-player

do-build:
	${CC} ${CFLAGS} ${LDFLAGS} ${DEFINES} ${WRKSRC}/mp.c \
		-o ${WRKSRC}/${PORTNAME}

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/${PORTNAME} ${PREFIX}/bin

.include <bsd.port.mk>
