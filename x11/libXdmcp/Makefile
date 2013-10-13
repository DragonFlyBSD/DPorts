# Created by: Eric Anholt <anholt@FreeBSD.org>
# $FreeBSD: x11/libXdmcp/Makefile 328096 2013-09-24 06:24:17Z bapt $

PORTNAME=	libXdmcp
PORTVERSION=	1.1.1
CATEGORIES=	x11

MAINTAINER=	x11@FreeBSD.org
COMMENT=	X Display Manager Control Protocol library

LICENSE=	MIT

XORG_CAT=	lib
USE_XORG=	xproto:both

CONFIGURE_ARGS+=--disable-docs --without-xmlto

post-patch:
	@${REINPLACE_CMD} '/^SUBDIRS/,/^$$/ \
		s/doc//' ${WRKSRC}/Makefile.in

.include <bsd.port.mk>
