# New ports collection Makefile for:	etcd
# Date created:				2 October 2009
# Whom:					gahr
#
# $FreeBSD: ports/audio/etcd/Makefile,v 1.5 2012/11/17 05:54:30 svnexp Exp $
#

PORTNAME=	etcd
PORTVERSION=	1.0.1
CATEGORIES=	audio
MASTER_SITES=	${MASTER_SITE_LOCAL} \
		http://people.freebsd.org/~gahr/distfiles/ \
		http://www.gahr.ch/etcd/
MASTER_SITE_SUBDIR=	gahr

MAINTAINER=	gahr@FreeBSD.org
COMMENT=	Enhanced Tiny CD, a simple ncurses-based CD player

USE_SDL=	sdl
MANCOMPRESSED=	no

MAKE_ARGS=	INCDIR=${LOCALBASE}/include LIBDIR=${LOCALBASE}/lib \
		SDL_LIBS=-lSDL NCURSES_LIBS="-lncursesw ${PTHREAD_LIBS}"

PLIST_FILES=	bin/etcd

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/etcd ${PREFIX}/bin/

.include <bsd.port.mk>
