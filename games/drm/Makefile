# Created by: Andrey Zakhvatov
# $FreeBSD: games/drm/Makefile 327730 2013-09-20 17:36:33Z bapt $

PORTNAME=		drm
PORTVERSION=		1.0
CATEGORIES=		games
MASTER_SITES=		${MASTER_SITE_SUNSITE}
MASTER_SITE_SUBDIR=	games/arcade
DISTNAME=		dr_mario
EXTRACT_SUFX=		.tar.Z

MAINTAINER=		ports@FreeBSD.org
COMMENT=	Very simple Tetris-style game

ALL_TARGET=

NO_STAGE=	yes
do-install:
	@ ${INSTALL_PROGRAM} ${WRKSRC}/bugs ${PREFIX}/bin/drm
.if !defined(NOPORTDOCS)
	@${MKDIR} ${DOCSDIR}
	@${INSTALL_DATA} ${WRKSRC}/README ${DOCSDIR}
.endif

.include <bsd.port.mk>
