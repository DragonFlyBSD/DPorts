# Created by: James Bailie <jimmy@mammothcheese.ca>
# $FreeBSD: games/tetrons/Makefile 340722 2014-01-22 17:00:46Z mat $

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

NO_STAGE=	yes
.include <bsd.port.mk>
