# Created by: Martin Matuska <mm@FreeBSD.org>
# $FreeBSD: audio/vo-aacenc/Makefile 323861 2013-07-28 22:48:07Z mm $

PORTNAME=	vo-aacenc
PORTVERSION=	0.1.3
CATEGORIES=	audio
MASTER_SITES=	SF/opencore-amr/${PORTNAME}

MAINTAINER=	mm@FreeBSD.org
COMMENT=	VisualOn AAC encoder library

LICENSE=	AL2
LICENSE_FILE=	${WRKSRC}/COPYING

GNU_CONFIGURE=	yes

post-patch:
	@${REINPLACE_CMD} -E -e \
	's|^pkgconfigdir = .*|pkgconfigdir = $$(prefix)/libdata/pkgconfig|g' \
	${WRKSRC}/Makefile.in

.include <bsd.port.mk>
