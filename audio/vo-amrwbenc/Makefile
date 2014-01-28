# Created by: Martin Matuska <mm@FreeBSD.org>
# $FreeBSD: audio/vo-amrwbenc/Makefile 340722 2014-01-22 17:00:46Z mat $

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
