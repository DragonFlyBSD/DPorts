# Created by: Maxim Sobolev <sobomax@FreeBSD.org>
# $FreeBSD: games/bomberinstinct/Makefile 323043 2013-07-15 14:48:34Z miwi $

PORTNAME=	bomberinstinct
PORTVERSION=	0.8.9
PORTREVISION=	9
CATEGORIES=	games
MASTER_SITES=	SF/${PORTNAME}/Bomber%20Instinct/BomberInstinct-${PORTVERSION}
DISTNAME=	BomberInstinct-${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Bomberman-like multiplayer game

WRKSRC=		${WRKDIR}/${DISTNAME}

USES=		gettext gmake
USE_SDL=	mixer sdl
GNU_CONFIGURE=	yes

CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib -lintl -pthread

post-patch:
	@${FIND} ${WRKSRC} -name "*.[ch]" | ${XARGS} ${REINPLACE_CMD} -e \
		's|<SDL/|<|g'

.include <bsd.port.mk>
