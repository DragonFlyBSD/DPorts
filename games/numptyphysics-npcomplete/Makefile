# Created by: Dmitry Marakasov <amdmi3@FreeBSD.org>
# $FreeBSD: games/numptyphysics-npcomplete/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	npcomplete
PORTVERSION=	0.0.r20090116
PORTREVISION=	2
CATEGORIES=	games
MASTER_SITES=	http://mirror.amdmi3.ru/distfiles/
PKGNAMEPREFIX=	numptyphysics-

MAINTAINER=	amdmi3@FreeBSD.org
COMMENT=	Level pack for Numpty Physics

RUN_DEPENDS=	numptyphysics:${PORTSDIR}/games/numptyphysics

USE_BZIP2=	yes
NO_BUILD=	yes
WRKSRC=		${WRKDIR}/npcomplete
DATADIR=	${PREFIX}/share/numptyphysics

NO_STAGE=	yes
post-extract:
# this level will crash the game
	@${RM} -f "${WRKSRC}/L02_bridge Gaps tut.nph"

do-install:
	${MKDIR} ${DATADIR}
	${INSTALL_DATA} ${WRKSRC}/*.nph ${DATADIR}

.include <bsd.port.mk>
