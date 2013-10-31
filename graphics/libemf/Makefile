# Created by: NAKATA Maho <maho@FreeBSD.org>
# $FreeBSD: graphics/libemf/Makefile 331928 2013-10-29 02:54:44Z maho $

PORTNAME=	libEMF
PORTVERSION=	1.0.7
CATEGORIES=	graphics
MASTER_SITES=	SF

MAINTAINER=	maho@FreeBSD.org
COMMENT=	Enhanced Metafile Library

USE_AUTOTOOLS=	libtool
GNU_CONFIGURE=	yes

NO_STAGE=	yes
.include <bsd.port.pre.mk>

post-install:
.if !defined(NOPORTDOCS)
	@${MKDIR} ${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/doc/html/* ${DOCSDIR}
.endif

.include <bsd.port.post.mk>
