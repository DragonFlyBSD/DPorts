# Created by: Dejan Lesjak <lesi@FreeBSD.org>
# $FreeBSD: head/x11/resourceproto/Makefile 340722 2014-01-22 17:00:46Z mat $

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
