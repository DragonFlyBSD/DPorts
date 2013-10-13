# Created by: Eric Anholt <anholt@FreeBSD.org>
# $FreeBSD: x11/libSM/Makefile 328711 2013-09-29 17:01:41Z zeising $

PORTNAME=	libSM
PORTVERSION=	1.2.2
PORTEPOCH=	1
CATEGORIES=	x11

MAINTAINER=	x11@FreeBSD.org
COMMENT=	Session Management library for X11

LICENSE=	MIT

XORG_CAT=	lib
USE_XORG=	ice xproto:both xtrans

CONFIGURE_ARGS+=--disable-docs --without-xmlto

post-patch:
	@${REINPLACE_CMD} '/^SUBDIRS/,/^$$/ \
		s/doc//' ${WRKSRC}/Makefile.in

.include <bsd.port.mk>
