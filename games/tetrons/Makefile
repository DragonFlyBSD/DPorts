# New ports collection makefile for:  tetrons
# Date created:                       Tue, Dec 19 2006 15:00:38 EST
# Whom:                               James Bailie <jimmy@mammothcheese.ca>
#
# $FreeBSD: ports/games/tetrons/Makefile,v 1.13 2012/11/17 05:57:54 svnexp Exp $
#

PORTNAME=	tetrons
PORTVERSION=	1.10
CATEGORIES=	games
MASTER_SITES=	http://www.mammothcheese.ca/

MAINTAINER=	jimmy@mammothcheese.ca
COMMENT=	Tetris(TM) clone for X11

MAKE_ARGS+=	-DRANDOM

MAKE_ENV=	X11BASE=${LOCALBASE}
USE_XORG=	x11 xext xi
PLIST_FILES=	bin/tetrons

.include <bsd.port.mk>
