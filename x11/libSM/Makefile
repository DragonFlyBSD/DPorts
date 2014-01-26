# Created by: Eric Anholt <anholt@FreeBSD.org>
# $FreeBSD: x11/libSM/Makefile 340722 2014-01-22 17:00:46Z mat $

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
