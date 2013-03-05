# $FreeBSD: ports/x11/xstdcmap/Makefile,v 1.5 2013/02/14 14:01:04 svnexp Exp $

PORTNAME=	xstdcmap
PORTVERSION=	1.0.3
CATEGORIES=	x11

MAINTAINER=	x11@FreeBSD.org
COMMENT=	X standard colormap utility

LICENSE=	MIT

XORG_CAT=	app
USE_XORG=	xmu x11

BUILD_DEPENDS=	${LOCALBASE}/libdata/pkgconfig/xorg-macros.pc:${PORTSDIR}/devel/xorg-macros

PLIST_FILES=	bin/xstdcmap

MAN1=		xstdcmap.1

.include <bsd.port.mk>
