# Created by: Martin Matuska <mm@FreeBSD.org>
# $FreeBSD: audio/vo-amrwbenc/Makefile 323861 2013-07-28 22:48:07Z mm $

PORTNAME=	vo-amrwbenc
PORTVERSION=	0.1.3
CATEGORIES=	audio
MASTER_SITES=	SF/opencore-amr/${PORTNAME}

MAINTAINER=	mm@FreeBSD.org
COMMENT=	VisualOn AMR-WB encoder library

LICENSE=	AL2
LICENSE_FILE=	${WRKSRC}/COPYING

GNU_CONFIGURE=	yes

post-patch:
	@${REINPLACE_CMD} -E -e \
	's|^pkgconfigdir = .*|pkgconfigdir = $$(prefix)/libdata/pkgconfig|g' \
	${WRKSRC}/Makefile.in

.include <bsd.port.mk>
