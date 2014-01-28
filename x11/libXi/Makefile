# Created by: Eric Anholt <anholt@FreeBSD.org>
# $FreeBSD: x11/libXi/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	libXi
PORTVERSION=	1.7.2
PORTEPOCH=	1
CATEGORIES=	x11

MAINTAINER=	x11@FreeBSD.org
COMMENT=	X Input extension library

LICENSE=	MIT

XORG_CAT=	lib
USE_XORG=	xproto x11 xext xextproto xfixes inputproto:both

CONFIGURE_ARGS+=--disable-docs \
		--disable-specs \
	       	--without-xmlto \
		--without-fop \
		--without-asciidoc \
		--without-xsltproc

.include <bsd.port.mk>
