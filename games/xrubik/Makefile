# Created by: Yukihiro Nakai <nakai@mlab.t.u-tokyo.ac.jp>
# $FreeBSD: games/xrubik/Makefile 321957 2013-06-28 11:51:05Z bapt $

PORTNAME=	xrubik
PORTVERSION=	5.5.2
PORTREVISION=	1
CATEGORIES=	games
MASTER_SITES=	${MASTER_SITE_XCONTRIB}
MASTER_SITE_SUBDIR=	games/xpuzzles

MAINTAINER=	dinoex@FreeBSD.org
COMMENT=	X-based rubik's cube(tm)

WRKSRC=		${WRKDIR}/xrubik
USES=		imake
USE_XORG=	xt sm ice xext x11
MAN1=		xrubik.1
XFREE86_HTML_MAN=	no
NO_INSTALL_MANPAGES=	yes

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/xrubik ${PREFIX}/bin
	${INSTALL_DATA} ${WRKSRC}/Rubik.ad ${PREFIX}/lib/X11/app-defaults/Rubik
	${INSTALL_MAN} ${WRKSRC}/xrubik.man ${PREFIX}/man/man1/xrubik.1

.include <bsd.port.mk>
