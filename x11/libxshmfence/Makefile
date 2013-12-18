# $FreeBSD: x11/libxshmfence/Makefile 336621 2013-12-16 11:11:09Z zeising $

PORTNAME=	libxshmfence
PORTVERSION=	1.1
CATEGORIES=	x11

MAINTAINER=	x11@FreeBSD.org
COMMENT=	Shared memory 'SyncFence' synchronization primitive

LICENSE=	MIT

USE_XORG=	xproto
XORG_CAT=	lib

test: build
	@cd ${WRKSRC} && ${MAKE} check

.include <bsd.port.mk>
