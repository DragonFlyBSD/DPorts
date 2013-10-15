# Created by: Bob Bomar <bob@fly.homeunix.org>
# $FreeBSD: games/eights/Makefile 327730 2013-09-20 17:36:33Z bapt $

PORTNAME=	eights
PORTVERSION=	1.0
CATEGORIES=	games
MASTER_SITES=	http://dxkelly.freeshell.org/
DISTNAME=	${PORTNAME}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Text based card game, the objective is to get rid of all your cards

NO_WRKSUBDIR=	yes
PLIST_FILES=	bin/eights

NO_STAGE=	yes
do-build:
	@cd ${WRKSRC} && ${CC} ${CFLAGS} ${PORTNAME}.c -o ${PORTNAME}

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/${PORTNAME} ${PREFIX}/bin

.include <bsd.port.mk>
