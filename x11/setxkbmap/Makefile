# $FreeBSD: ports/x11/setxkbmap/Makefile,v 1.7 2013/02/04 05:30:31 svnexp Exp $

PORTNAME=	setxkbmap
PORTVERSION=	1.3.0
CATEGORIES=	x11

MAINTAINER=	x11@FreeBSD.org
COMMENT=	Set the keyboard using the X Keyboard Extension

XORG_CAT=	app
USE_XORG=	xkbfile x11

CONFIGURE_ARGS=	--with-xkb-config-root=${LOCALBASE}/share/X11/xkb

PLIST_FILES=	bin/setxkbmap

MAN1=		setxkbmap.1

.include <bsd.port.mk>
