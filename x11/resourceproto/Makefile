# Created by: Dejan Lesjak <lesi@FreeBSD.org>
# $FreeBSD: x11/resourceproto/Makefile 328096 2013-09-24 06:24:17Z bapt $

PORTNAME=	resourceproto
PORTVERSION=	1.2.0
CATEGORIES=	x11

MAINTAINER=	x11@FreeBSD.org
COMMENT=	Resource extension headers

XORG_CAT=	proto

post-patch:
	@${REINPLACE_CMD} '/^install-data-am:/,/^$$/ \
		s/install-dist_docDATA//' ${WRKSRC}/Makefile.in

.include <bsd.port.mk>
