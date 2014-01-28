# Created by: Eric Anholt <anholt@FreeBSD.org>
# $FreeBSD: x11/libXext/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	libXext
PORTVERSION=	1.3.2
PORTEPOCH=	1
CATEGORIES=	x11

MAINTAINER=	x11@FreeBSD.org
COMMENT=	X11 Extension library

LICENSE=	MIT

XORG_CAT=	lib
USE_XORG=	xproto x11 xextproto:both xau
CONFIGURE_ARGS+=--disable-specs --without-xmlto

.include <bsd.port.mk>
