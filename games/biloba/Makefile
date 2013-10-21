# Created by: Dmitry Marakasov <amdmi3@amdmi3.ru>
# $FreeBSD: games/biloba/Makefile 330716 2013-10-18 01:20:59Z amdmi3 $

PORTNAME=	biloba
PORTVERSION=	0.9.3
PORTREVISION=	3
CATEGORIES=	games
MASTER_SITES=	SF/${PORTNAME}/Biloba/${PORTVERSION}

MAINTAINER=	amdmi3@FreeBSD.org
COMMENT=	A strategy board game for 2 to 4 players

GNU_CONFIGURE=	yes
USES=		gmake
USE_SDL=	image mixer sdl

PLIST_FILES=	bin/${PORTNAME} bin/${PORTNAME}-server
PORTDATA=	*

DESKTOP_ENTRIES="Biloba" \
		"A strategy board game for 2 to 4 players" \
		"${DATADIR}/biloba_icon.png" \
		"biloba" \
		"Game;LogicGame;" \
		false

post-install:
	${INSTALL_DATA} ${WRKSRC}/biloba_icon.png ${STAGEDIR}${DATADIR}/

.include <bsd.port.mk>
