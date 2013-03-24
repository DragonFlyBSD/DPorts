# New ports collection makefile for:	vo-aacenc
# Date created:		23 Jun 2011
# Whom:			Martin Matuska <mm@FreeBSD.org>
#
# $FreeBSD: ports/audio/vo-aacenc/Makefile,v 1.7 2012/11/17 05:54:46 svnexp Exp $
#

PORTNAME=	vo-aacenc
PORTVERSION=	0.1.2
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
