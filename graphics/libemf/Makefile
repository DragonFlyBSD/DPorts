# Created by: NAKATA Maho <maho@FreeBSD.org>
# $FreeBSD: graphics/libemf/Makefile 340722 2014-01-22 17:00:46Z mat $

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
