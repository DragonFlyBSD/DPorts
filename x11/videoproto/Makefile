# Created by: Dejan Lesjak <lesi@FreeBSD.org>
# $FreeBSD: x11/videoproto/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	videoproto
PORTVERSION=	2.3.2
CATEGORIES=	x11

MAINTAINER=	x11@FreeBSD.org
COMMENT=	Video extension headers

XORG_CAT=	proto

post-patch:
	@${REINPLACE_CMD} '/^install-data-am:/,/^$$/ \
		s/install-dist_docDATA//' ${WRKSRC}/Makefile.in

.include <bsd.port.mk>
