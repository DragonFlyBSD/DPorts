# Created by: Andrey Zakhvatov
# $FreeBSD: games/xmball/Makefile 327730 2013-09-20 17:36:33Z bapt $

PORTNAME=	xmball
PORTVERSION=	5.5.2
PORTREVISION=	2
CATEGORIES=	games
MASTER_SITES=	${MASTER_SITE_XCONTRIB}
MASTER_SITE_SUBDIR=	games/xpuzzles

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Masterball puzzle for X Window System

WRKSRC=		${WRKDIR}/${PORTNAME}
USES=		imake
USE_XORG=	x11 xext xt sm ice
MAN1=		xmball.1
MANCOMPRESSED=	no
XFREE86_HTML_MAN=	no

NO_STAGE=	yes
do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/xmball ${PREFIX}/bin
	${INSTALL_DATA} ${WRKSRC}/Mball.ad ${PREFIX}/lib/X11/app-defaults/Mball
	${INSTALL_MAN} ${WRKSRC}/xmball.man ${MANPREFIX}/man/man1/xmball.1

.include <bsd.port.mk>
