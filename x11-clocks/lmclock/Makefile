# Created by: Emanuel Haupt <ehaupt@critical.ch>
# $FreeBSD: x11-clocks/lmclock/Makefile 331418 2013-10-23 19:36:17Z ehaupt $

PORTNAME=	lmclock
PORTVERSION=	1.2
PORTREVISION=	2
CATEGORIES=	x11-clocks
MASTER_SITES=	CRITICAL

MAINTAINER=	ehaupt@FreeBSD.org
COMMENT=	Xerox Lisp machine clock clone

USES=		imake
USE_XORG=	x11 xext

PLIST_FILES=	bin/lmclock

post-extract:
	@${TOUCH} ${WRKSRC}/lmclock.man

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/${PORTNAME} ${STAGEDIR}${PREFIX}/bin

.include <bsd.port.mk>
