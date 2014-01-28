# Created by: Andrey Zakhvatov
# $FreeBSD: games/xskewb/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	xskewb
PORTVERSION=	5.5.2
PORTREVISION=	2
CATEGORIES=	games
MASTER_SITES=	${MASTER_SITE_XCONTRIB}
MASTER_SITE_SUBDIR=	games/xpuzzles

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Skewb puzzle (similar to Rubik's Cube) for X Window

WRKSRC=		${WRKDIR}/${PORTNAME}
USES=		imake
USE_XORG=	x11 xext xt sm ice

PLIST_FILES=	bin/xskewb \
		lib/X11/app-defaults/Skewb \
		man/man1/xskewb.1.gz

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/xskewb ${STAGEDIR}${PREFIX}/bin
	${INSTALL_DATA} ${WRKSRC}/Skewb.ad ${STAGEDIR}${PREFIX}/lib/X11/app-defaults/Skewb
	${INSTALL_MAN} ${WRKSRC}/xskewb.man  ${STAGEDIR}${MANPREFIX}/man/man1/xskewb.1

.include <bsd.port.mk>
