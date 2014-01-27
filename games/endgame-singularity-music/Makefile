# Created by: Andrew Pantyukhin <infofarmer@FreeBSD.org>
# $FreeBSD: games/endgame-singularity-music/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	endgame-singularity-music
PORTVERSION=	006
CATEGORIES=	games
MASTER_SITES=	GOOGLE_CODE CENKES

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Music pack for endgame-singularity

PROJECTHOST=	endgame-singularity
NO_BUILD=	yes
USE_ZIP=	yes
DATADIR=	${PREFIX}/share/singularity

NO_STAGE=	yes
do-install:
	@cd ${WRKSRC}/&&${COPYTREE_SHARE} music ${DATADIR}/

.include <bsd.port.mk>
