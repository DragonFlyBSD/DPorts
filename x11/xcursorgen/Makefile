# $FreeBSD: ports/x11/xcursorgen/Makefile,v 1.10 2013/02/04 03:35:58 svnexp Exp $

PORTNAME=	xcursorgen
PORTVERSION=	1.0.5
CATEGORIES=	x11

MAINTAINER=	x11@FreeBSD.org
COMMENT=	Create an X cursor file from a collection of PNG images

LICENSE=	MIT

LIB_DEPENDS=	png15:${PORTSDIR}/graphics/png

XORG_CAT=	app
USE_XORG=	x11 xcursor xextproto

PLIST_FILES=	bin/xcursorgen

MAN1=		xcursorgen.1

.include <bsd.port.mk>
