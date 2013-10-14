# $FreeBSD: x11/rgb/Makefile 328645 2013-09-29 03:16:52Z eadler $

PORTNAME=	rgb
PORTVERSION=	1.0.5
CATEGORIES=	x11

MAINTAINER=	x11@FreeBSD.org
COMMENT=	Uncompile an rgb corl-name database

CONFIGURE_ARGS=	--with-rgb-db-dir=${PREFIX}/lib/X11/rgb

XORG_CAT=	app
USE_XORG=	x11 xproto

PLIST_FILES=	bin/showrgb lib/X11/rgb.txt man/man1/showrgb.1.gz

.include <bsd.port.mk>
