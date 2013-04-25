# Created by: Dmitry Marakasov <amdmi3@FreeBSD.org>
# $FreeBSD: games/flare/Makefile 315870 2013-04-16 17:47:58Z amdmi3 $

PORTNAME=	flare
PORTVERSION=	0.18
PORTEPOCH=	1
CATEGORIES=	games
MASTER_SITES=	SF/${PORTNAME}-game/

MAINTAINER=	amdmi3@FreeBSD.org
COMMENT=	Free Libre Action Roleplaying Engine

LICENSE=	GPLv3

USES=		cmake
USE_SDL=	sdl mixer image ttf
MAKE_JOBS_SAFE=	yes
CMAKE_BUILD_TYPE=	#empty
INSTALLS_ICONS=	yes

CMAKE_ARGS=	-DBINDIR="bin" -DDATADIR="share/flare"

LATEST_LINK=	flare-rpg

PORTDOCS=	*

.include <bsd.port.options.mk>

.if ${PORT_OPTIONS:MDOCS}
post-install:
	${MKDIR} ${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/README ${DOCSDIR}/
.endif

.include <bsd.port.mk>
