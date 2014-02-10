# Created by: Dejan Lesjak <lesi@FreeBSD.org>
# $FreeBSD: head/x11/xcmiscproto/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	xcmiscproto
PORTVERSION=	1.2.2
CATEGORIES=	x11

MAINTAINER=	x11@FreeBSD.org
COMMENT=	XCMisc extension headers

XORG_CAT=	proto

CONFIGURE_ARGS+=--disable-specs --without-xmlto

post-patch:
	@${REINPLACE_CMD} '/^SUBDIRS =/,/^$$/ s/specs//' \
		${WRKSRC}/Makefile.in

#SUBDIRS= specs

.include <bsd.port.mk>
