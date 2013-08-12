# Created by: Andrey Zakhvatov
# $FreeBSD: games/xmlink/Makefile 321991 2013-06-28 21:48:59Z bapt $

PORTNAME=	xmlink
PORTVERSION=	5.5.2
PORTREVISION=	2
CATEGORIES=	games
MASTER_SITES=	${MASTER_SITE_XCONTRIB}
MASTER_SITE_SUBDIR=	games/xpuzzles

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Missing Link puzzle for X Window System

WRKSRC=		${WRKDIR}/${PORTNAME}
USES=		imake
USE_XORG=	x11 xext xt sm ice
MAN1=		xmlink.1
MANCOMPRESSED=	no
XFREE86_HTML_MAN=	no

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/xmlink ${PREFIX}/bin
	${INSTALL_DATA} ${WRKSRC}/Mlink.ad ${PREFIX}/lib/X11/app-defaults/Mlink
	${INSTALL_MAN} ${WRKSRC}/xmlink.man ${MANPREFIX}/man/man1/xmlink.1

.include <bsd.port.mk>
