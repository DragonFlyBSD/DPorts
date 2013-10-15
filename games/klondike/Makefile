# Created by: johnh@isi.edu
# $FreeBSD: games/klondike/Makefile 327730 2013-09-20 17:36:33Z bapt $

PORTNAME=	klondike
PORTVERSION=	1.9
PORTREVISION=	3
CATEGORIES=	games tk
MASTER_SITES=	http://www.isi.edu/~johnh/SOFTWARE/JACOBY/

MAINTAINER=	faber@isi.edu
COMMENT=	A solitaire game for X11

GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--bindir=${PREFIX}/bin --datadir=${PREFIX}/share/games
USE_TK_RUN=	yes
MAN6=		klondike.6

NO_STAGE=	yes
.include <bsd.port.pre.mk>

CONFIGURE_ENV=	WISHX=${WISH}

.include <bsd.port.post.mk>
