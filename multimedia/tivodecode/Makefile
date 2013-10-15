# Created by: Yi-Hsuan Hsin <mhsin@mhsin.org>
# $FreeBSD: multimedia/tivodecode/Makefile 327747 2013-09-20 20:57:48Z bapt $

PORTNAME=	tivodecode
DISTVERSION=	0.2pre4
CATEGORIES=	multimedia
MASTER_SITES=	SF/${PORTNAME}/${PORTNAME}/0.2pre4

MAINTAINER=	mhsin@mhsin.org
COMMENT=	Converts .TiVo files to normal MPEG files

USE_GMAKE=	yes
GNU_CONFIGURE=	yes

NO_STAGE=	yes
post-install:
.if !defined(NOPORTDOCS)
	@${MKDIR} ${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/COPYING ${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/README ${DOCSDIR}
.endif

.include <bsd.port.mk>
