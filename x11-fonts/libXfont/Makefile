# Created by: Eric Anholt <anholt@FreeBSD.org>
# $FreeBSD: x11-fonts/libXfont/Makefile 319055 2013-05-25 14:37:02Z zeising $

PORTNAME=	libXfont
PORTVERSION=	1.4.5
PORTEPOCH=	1
CATEGORIES=	x11-fonts

MAINTAINER=	x11@FreeBSD.org
COMMENT=	X font library

LIB_DEPENDS=	freetype.9:${PORTSDIR}/print/freetype2

XORG_CAT=	lib
USE_XORG=	xproto:both xtrans fontsproto:both fontenc

CONFIGURE_ARGS=--without-xmlto --disable-devel-docs

.include <bsd.port.mk>
