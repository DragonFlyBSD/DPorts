# Created by: Eric Anholt <anholt@FreeBSD.org>
# $FreeBSD: x11/recordproto/Makefile 328096 2013-09-24 06:24:17Z bapt $

PORTNAME=	recordproto
PORTVERSION=	1.14.2
CATEGORIES=	x11

MAINTAINER=	x11@FreeBSD.org
COMMENT=	RECORD extension headers

XORG_CAT=	proto

CONFIGURE_ARGS+=--disable-specs --without-xmlto

post-patch:
	@${REINPLACE_CMD} '/^SUBDIRS/,/&$$/ \
		s/specs//' ${WRKSRC}/Makefile.in

.include <bsd.port.mk>
