# Created by: Martin Matuska <mm@FreeBSD.org>
# $FreeBSD: audio/vo-amrwbenc/Makefile 338168 2013-12-30 20:55:18Z ohauer $

PORTNAME=	vo-amrwbenc
PORTVERSION=	0.1.3
CATEGORIES=	audio
MASTER_SITES=	SF/opencore-amr/${PORTNAME}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	VisualOn AMR-WB encoder library

LICENSE=	APACHE20
LICENSE_FILE=	${WRKSRC}/COPYING

GNU_CONFIGURE=	yes

post-patch:
	@${REINPLACE_CMD} -E -e \
	's|^pkgconfigdir = .*|pkgconfigdir = $$(prefix)/libdata/pkgconfig|g' \
	${WRKSRC}/Makefile.in

.include <bsd.port.mk>
