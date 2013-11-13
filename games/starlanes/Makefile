# Created by: Andrey Zakhvatov
# $FreeBSD: games/starlanes/Makefile 333468 2013-11-11 01:34:05Z danilo $

PORTNAME=	starlanes
PORTVERSION=	1.2.2
CATEGORIES=	games
MASTER_SITES=	SUNSITE/games/strategy

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Classic space-age stock trading game

PLIST_FILES=	bin/starlanes man/man6/starlanes.6.gz

post-patch:
	@${REINPLACE_CMD} -e \
		's| restrict| m_restrict| ; \
		 s|(restrict|(m_restrict|' ${WRKSRC}/starlanes.c

do-build:
	(cd ${WRKSRC} \
		&& ${CC} ${CFLAGS} -o starlanes starlanes.c -lcurses)

do-install:
	(cd ${WRKSRC} && ${INSTALL_PROGRAM} starlanes ${STAGEDIR}${PREFIX}/bin)
	(cd ${WRKSRC} && ${INSTALL_MAN} starlanes.6 ${STAGEDIR}${MAN6PREFIX}/man/man6)

.include <bsd.port.mk>
