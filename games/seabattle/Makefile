# Created by: Andrey Zakhvatov
# $FreeBSD: games/seabattle/Makefile 327730 2013-09-20 17:36:33Z bapt $

PORTNAME=	seabattle
PORTVERSION=	1.0
PORTREVISION=	1
CATEGORIES=	games
MASTER_SITES=	SUNSITE \
		http://www.deater.net/weave/vmwprod/
MASTER_SITE_SUBDIR=	games/strategy

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Curses based battleship type game

PORTDOCS=	readme.txt

NO_STAGE=	yes
.include <bsd.port.options.mk>

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/seabattle ${PREFIX}/bin
	@${MKDIR} ${PREFIX}/share/seabattle
	${INSTALL_DATA} ${WRKSRC}/*.au ${DATADIR}
.if ${PORT_OPTIONS:MDOCS}
	@${MKDIR} ${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/readme.txt ${DOCSDIR}
.endif

.include <bsd.port.mk>
