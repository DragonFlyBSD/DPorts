# New ports collection makefile for:  	barrage
# Date created:       	23 April 2003
# Whom:  	Kirill Ponomarew <ponomarew@oberon.net>
#
# $FreeBSD: ports/games/barrage/Makefile,v 1.26 2012/11/17 05:57:32 svnexp Exp $
#

PORTNAME=	barrage
PORTVERSION=	1.0.4
PORTREVISION=	1
CATEGORIES=	games
MASTER_SITES=	SF/lgames/${PORTNAME}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Destroy as many targets as possible

USE_SDL=	sdl mixer
USE_GMAKE=	yes
GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--with-profile-path=/var/games

post-patch:
	@${REINPLACE_CMD} -e 's|/games/|/|g' ${WRKSRC}/configure

.include <bsd.port.mk>
