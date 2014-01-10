# Created by: Eric Anholt <anholt@FreeBSD.org>
# $FreeBSD: x11-fonts/libXfont/Makefile 339086 2014-01-08 10:42:04Z zeising $

PORTNAME=	libXfont
PORTVERSION=	1.4.7
PORTEPOCH=	1
CATEGORIES=	x11-fonts

MAINTAINER=	x11@FreeBSD.org
COMMENT=	X font library

LIB_DEPENDS=	libfreetype.so:${PORTSDIR}/print/freetype2

XORG_CAT=	lib
USE_XORG=	xproto:both xtrans fontsproto:both fontenc

CONFIGURE_ARGS=--without-xmlto --disable-devel-docs

.include <bsd.port.mk>
