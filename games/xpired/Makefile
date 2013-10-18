# Created by: Edwin Groothuis <edwin@mavetju.org>
# $FreeBSD: games/xpired/Makefile 330605 2013-10-17 06:19:32Z edwin $

PORTNAME=	xpired
PORTVERSION=	1.22
PORTREVISION=	18
CATEGORIES=	games
MASTER_SITES=	SF/${PORTNAME}/${PORTNAME}-linux/${PORTVERSION}
DISTNAME=	${PORTNAME}-${PORTVERSION}-linux_source

MAINTAINER=	edwin@mavetju.org
COMMENT=	An action-puzzle maze escape game (SDL)

USE_SDL=	gfx image mixer sdl
WRKSRC=		${WRKDIR}/src

NO_STAGE=	yes
do-install:
	@${INSTALL_PROGRAM} ${WRKSRC}/xpired ${WRKSRC}/xpiredit ${PREFIX}/bin
	@${MKDIR} ${DATADIR}/img
	@${MKDIR} ${DATADIR}/snd
.for files in xpired.lvl xpired.cfg bgimages.txt readme.txt xpired.dmo
	@${INSTALL_DATA} ${WRKSRC}/${files} ${DATADIR}
.endfor
	@${INSTALL_DATA} ${WRKSRC}/img/* ${DATADIR}/img
	@${INSTALL_DATA} ${WRKSRC}/snd/* ${DATADIR}/snd

.include <bsd.port.mk>
