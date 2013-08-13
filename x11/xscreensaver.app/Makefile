# Created by: hemi@puresimplicity.net
# $FreeBSD: x11/xscreensaver.app/Makefile 323416 2013-07-21 21:33:40Z rene $

PORTNAME=	XScreenSaver.App
PORTVERSION=	2.3
PORTREVISION=	3
CATEGORIES=	x11 windowmaker
MASTER_SITES=	SF/xscreensaverapp/${PORTNAME}/${PORTVERSION}

MAINTAINER=	hemi@puresimplicity.net
COMMENT=	WindowMaker dockapp to control XScreenSaver

LIB_DEPENDS=	dockapp.2:${PORTSDIR}/x11-wm/libdockapp

PLIST_FILES=	bin/XScreenSaver.App
GNU_CONFIGURE=	yes
CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib -lX11

MAKE_ARGS=	"LDFLAGS+=${LDFLAGS}"

.include <bsd.port.mk>
