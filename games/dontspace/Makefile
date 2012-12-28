# New ports collection makefile for:    dontspace
# Date created:         26-Apr-97
# Whom:                 johnh@isi.edu
#
# $FreeBSD: ports/games/dontspace/Makefile,v 1.18 2012/11/17 05:57:36 svnexp Exp $
#

PORTNAME=	dontspace
PORTVERSION=	1.2
PORTREVISION=	3
CATEGORIES=	games tk
MASTER_SITES=	http://www.isi.edu/~johnh/SOFTWARE/JACOBY/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	A solitaire game for X11 modeled after Free Space

GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--bindir=${PREFIX}/bin --datadir=${PREFIX}/share/games
CONFIGURE_ENV=	WISHX=${PREFIX}/bin/wish8.4
USE_TK=		yes
MAN6=		dontspace.6

.include <bsd.port.mk>
