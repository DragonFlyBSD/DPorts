# Created by: Adam Weinberger <adamw@FreeBSD.org>
# $FreeBSD: games/glmaze/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	glmaze
PORTVERSION=	1.1a
PORTREVISION=	8
CATEGORIES=	games
MASTER_SITES=	SF/${PORTNAME}/${PORTNAME}/${PORTNAME}-${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Multiplayer OpenGL Maze Game

USE_GL=		gl
USE_SDL=	mixer sdl
WRKSRC=		${WRKDIR}/${PORTNAME}

PLIST_FILES=	bin/${PORTNAME} \
		man/man1/glmaze.1.gz
PORTDATA=	*

post-patch:
	@${REINPLACE_CMD} -e "s|%%PREFIX%%|${PREFIX}|g" ${WRKSRC}/shot.c

.include <bsd.port.mk>
