# Created by: Emanuel Haupt <ehaupt@critical.ch>
# $FreeBSD: x11-clocks/lmclock/Makefile 327778 2013-09-20 23:44:55Z bapt $

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

NO_STAGE=	yes
post-extract:
	@${TOUCH} ${WRKSRC}/lmclock.man

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/${PORTNAME} ${PREFIX}/bin

.include <bsd.port.mk>
