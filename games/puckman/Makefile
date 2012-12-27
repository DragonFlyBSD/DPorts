# New Ports collection makefile for	puckman
# Date created:		2012-08-08
# Whom:			nemysis@gmx.ch
#
# $FreeBSD: ports/games/puckman/Makefile,v 1.2 2012/11/17 05:57:49 svnexp Exp $
#

PORTNAME=	puckman
PORTVERSION=	1.0
CATEGORIES=	games
MASTER_SITES=	https://github.com/downloads/patapizza/puckman/

MAINTAINER=	nemysis@gmx.ch
COMMENT=	An unofficial clone of the original Pac-Man game

LICENSE=	GPLv3

FETCH_ARGS?=	-Fpr
USE_GMAKE=	yes
USE_SDL=	sdl image gfx

PLIST_FILES=	bin/${PORTNAME} \
		share/pixmaps/${PORTNAME}.png

PORTDATA=	*
PORTDOCS=	README.md

.include <bsd.port.options.mk>

do-build:
	cd ${WRKSRC} && ${CC} -o ${PORTNAME} ${CFLAGS} \
		-DDATA_PREFIX=\"${DATADIR}/\" \
		-lm `${SDL_CONFIG} --cflags --libs` -lSDL -lSDL_image -lSDL_gfx -lm puckman.c

do-install:
# Executable
	${INSTALL_PROGRAM} ${WRKSRC}/${PORTNAME} ${PREFIX}/bin

# Data
	${MKDIR} ${DATADIR}
	@(cd ${WRKSRC} && ${COPYTREE_SHARE} images ${DATADIR})

# Pixmaps
	${INSTALL_DATA} ${WRKSRC}/images/logo.png ${PREFIX}/share/pixmaps/${PORTNAME}.png

# Documentation
.if ${PORT_OPTIONS:MDOCS}
	${MKDIR} ${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/README.md ${DOCSDIR}
.endif

.include <bsd.port.mk>
