# $FreeBSD: ports/x11/viewres/Makefile,v 1.6 2013/02/13 23:22:04 svnexp Exp $

PORTNAME=	viewres
PORTVERSION=	1.0.4
CATEGORIES=	x11

MAINTAINER=	x11@FreeBSD.org
COMMENT=	Graphical class browser for Xt

XORG_CAT=	app
USE_XORG=	xt xaw

BUILD_DEPENDS=	${LOCALBASE}/libdata/pkgconfig/xorg-macros.pc:${PORTSDIR}/devel/xorg-macros

MAN1=		viewres.1

PLIST_FILES+=	bin/viewres \
		share/X11/app-defaults/Viewres \
		share/X11/app-defaults/Viewres-color
PLIST_DIRS+=	share/X11/app-defaults \
		share/X11

.include <bsd.port.mk>
