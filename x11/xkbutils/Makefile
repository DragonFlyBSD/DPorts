# $FreeBSD: ports/x11/xkbutils/Makefile,v 1.7 2013/02/14 13:10:01 svnexp Exp $

PORTNAME=	xkbutils
PORTVERSION=	1.0.4
CATEGORIES=	x11

MAINTAINER=	x11@FreeBSD.org
COMMENT=	XKB utility demos

LICENSE=	MIT

XORG_CAT=	app
USE_XORG=	xkbfile x11 xaw inputproto

BUILD_DEPENDS=	${LOCALBASE}/libdata/pkgconfig/xorg-macros.pc:${PORTSDIR}/devel/xorg-macros

MAN1=		xkbbell.1 xkbvleds.1 xkbwatch.1

.include <bsd.port.mk>
