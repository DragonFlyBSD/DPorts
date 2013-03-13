# Ports collection Makefile for:	glmaze
# Date created:				5 June 2003
# Whom:					Adam Weinberger <adamw@FreeBSD.org>
#
# $FreeBSD: ports/games/glmaze/Makefile,v 1.12 2012/11/17 05:57:39 svnexp Exp $

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

post-patch:
	@${REINPLACE_CMD} -e "s|%%PREFIX%%|${PREFIX}|g" ${WRKSRC}/shot.c

.include <bsd.port.mk>
