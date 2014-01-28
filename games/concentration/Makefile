# Created by: Dmitry Marakasov <amdmi3@amdmi3.ru>
# $FreeBSD: games/concentration/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	concentration
PORTVERSION=	1.2
PORTREVISION=	10
CATEGORIES=	games
MASTER_SITES=	http://www.shiftygames.com/concentration/ \
		http://mirror.amdmi3.ru/distfiles/

MAINTAINER=	amdmi3@FreeBSD.org
COMMENT=	Find all matching pairs of icons as fast as possible

GNU_CONFIGURE=	yes
USES=		gmake
USE_SDL=	sdl mixer image ttf

CPPFLAGS+=	`${SDL_CONFIG} --cflags`
LDFLAGS+=	`${SDL_CONFIG} --libs`

PLIST_FILES=	bin/${PORTNAME} \
		man/man6/${PORTNAME}.6.gz
PORTDATA=	*

DESKTOP_ENTRIES="Concentration" \
		"${COMMENT}" \
		"${DATADIR}/pics/cover.png" \
		"${PORTNAME}" \
		"Game;LogicGame;" \
		""

.include <bsd.port.mk>
