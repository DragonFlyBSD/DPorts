PORTNAME=	freedink-data
PORTVERSION=	1.08.${PORTVER}
CATEGORIES=	games
MASTER_SITES=	GNU/freedink

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Game data for games/freedink (Dink Smallwood)

USES=		gettext gmake
NO_BUILD=	yes

PORTVER=	20170409

post-patch:
	@${REINPLACE_CMD} -e 's|%%PREFIX%%|${PREFIX}|g' \
		${WRKSRC}/Makefile

dfly-patch:
	${REINPLACE_CMD} -e 's@xargs -0r @xargs -0 @g'			\
		${WRKSRC}/Makefile

.include <bsd.port.mk>
