# Created by: Eric Anholt <anholt@FreeBSD.org>
# $FreeBSD: x11-fonts/libXfont/Makefile 327781 2013-09-20 23:51:14Z bapt $

PORTNAME=	libXfont
PORTVERSION=	1.4.6
PORTEPOCH=	1
CATEGORIES=	x11-fonts

MAINTAINER=	x11@FreeBSD.org
COMMENT=	X font library

LIB_DEPENDS=	libfreetype.so:${PORTSDIR}/print/freetype2

XORG_CAT=	lib
USE_XORG=	xproto:both xtrans fontsproto:both fontenc

CONFIGURE_ARGS=--without-xmlto --disable-devel-docs

NO_STAGE=	yes
.include <bsd.port.mk>
