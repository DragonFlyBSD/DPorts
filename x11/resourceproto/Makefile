# Created by: Dejan Lesjak <lesi@FreeBSD.org>
# $FreeBSD: x11/resourceproto/Makefile 319055 2013-05-25 14:37:02Z zeising $

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
