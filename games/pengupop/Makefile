# Created by: Dmitry Marakasov <amdmi3@amdmi3.ru>
# $FreeBSD: games/pengupop/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	pengupop
PORTVERSION=	2.2.6
PORTREVISION=	1
CATEGORIES=	games
MASTER_SITES=	http://www.junoplay.com/files/ \
		http://mirror.amdmi3.ru/distfiles/

MAINTAINER=	amdmi3@FreeBSD.org
COMMENT=	Online multiplayer clone of Bust a Move

GNU_CONFIGURE=	yes
USES=		gmake
USE_SDL=	sdl
CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib ${PTHREAD_LIBS}

PLIST_FILES=	bin/pengupop

.include <bsd.port.mk>
