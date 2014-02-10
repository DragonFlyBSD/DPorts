# Created by: Eric Anholt <anholt@FreeBSD.org>
# $FreeBSD: head/x11/recordproto/Makefile 340722 2014-01-22 17:00:46Z mat $

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
