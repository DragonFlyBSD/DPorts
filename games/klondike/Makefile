# New ports collection makefile for:    klondike
# Date created:         26-Apr-97
# Whom:                 johnh@isi.edu
#
# $FreeBSD: ports/games/klondike/Makefile,v 1.19 2012/11/17 05:57:43 svnexp Exp $
#

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

.include <bsd.port.pre.mk>

CONFIGURE_ENV=	WISHX=${WISH}

.include <bsd.port.post.mk>
