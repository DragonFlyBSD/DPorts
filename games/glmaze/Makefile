# Created by: Adam Weinberger <adamw@FreeBSD.org>
# $FreeBSD: games/glmaze/Makefile 327730 2013-09-20 17:36:33Z bapt $

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

MAN1=		glmaze.1

NO_STAGE=	yes
post-patch:
	@${REINPLACE_CMD} -e "s|%%PREFIX%%|${PREFIX}|g" ${WRKSRC}/shot.c

.include <bsd.port.mk>
