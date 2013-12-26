# Created by: J.R. Oldroyd <fbsd@opal.com>
# $FreeBSD: games/daimonin-music/Makefile 337624 2013-12-26 22:15:01Z marino $

PORTNAME=	daimonin-music
PORTVERSION=	20120402
CATEGORIES=	games
MASTER_SITES=	SF/daimonin/Addon%20packs/Music/
DISTNAME=	AllMusic
DIST_SUBDIR=	daimonin

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Music for daimonin client

NO_BUILD=	true
USE_ZIP=	true

MYDATADIR=	${PREFIX}/share/daimonin

EXTRACT_BEFORE_ARGS=	-aqo

do-install:
	${MKDIR} ${STAGEDIR}${MYDATADIR}
	cd ${WRKDIR} && ${COPYTREE_SHARE} media ${STAGEDIR}${MYDATADIR}/

.include <bsd.port.mk>
