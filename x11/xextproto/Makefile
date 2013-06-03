# Created by: Dejan Lesjak <lesi@FreeBSD.org>
# $FreeBSD: x11/xextproto/Makefile 319055 2013-05-25 14:37:02Z zeising $

PORTNAME=	xextproto
PORTVERSION=	7.2.1
CATEGORIES=	x11

MAINTAINER=	x11@FreeBSD.org
COMMENT=	XExt extension headers

XORG_CAT=	proto

CONFIGURE_ARGS+=--disable-specs

post-patch:
	@${REINPLACE_CMD} '/^SUBDIR/s/specs//' ${WRKSRC}/Makefile.in

.include <bsd.port.mk>
