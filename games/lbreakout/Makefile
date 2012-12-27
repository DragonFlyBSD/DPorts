# New ports collection makefile for:	lbreakout
# Date created:				19 October 2000
# Whom:					Maxim Sobolev <sobomax@FreeBSD.org>
#
# $FreeBSD: ports/games/lbreakout/Makefile,v 1.27 2012/11/17 05:57:43 svnexp Exp $
#

PORTNAME=	lbreakout
PORTVERSION=	010315
PORTREVISION=	6
CATEGORIES=	games
MASTER_SITES=	SF/lgames/${PORTNAME}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	A nice clone of classical Breakout game

USE_SDL=	sdl
USE_GMAKE=	yes
GNU_CONFIGURE=	yes
CONFIGURE_ENV=	LIBS="-lcompat"

post-patch:
	@${REINPLACE_CMD} -e 's|-lpthread|${PTHREAD_LIBS}|g' ${WRKSRC}/configure
	@${GREP} -lR "SDL/SDL" ${WRKSRC} | ${XARGS} ${REINPLACE_CMD} -e \
		's|"SDL/SDL|"SDL|g ; \
		 s|<SDL/SDL|<SDL|g'

pre-install:
	${MKDIR} /var/games/${PORTNAME}

post-install:
	${CHOWN} root:games ${PREFIX}/bin/${PORTNAME}
	${CHMOD} 2755 ${PREFIX}/bin/${PORTNAME}
	${CHMOD} 664 /var/games/${PORTNAME}/${PORTNAME}.hscr
	${CHOWN} root:games /var/games/${PORTNAME}/${PORTNAME}.hscr

.include <bsd.port.mk>
