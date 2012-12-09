# New ports collection makefile for:	eights
# Date created:				21 Febuary 2002
# Whom:					Bob Bomar <bob@fly.homeunix.org>
#
# $FreeBSD: ports/games/eights/Makefile,v 1.7 2012/11/17 05:57:36 svnexp Exp $
#

PORTNAME=	eights
PORTVERSION=	1.0
CATEGORIES=	games
MASTER_SITES=	http://dxkelly.freeshell.org/
DISTNAME=	${PORTNAME}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Text based card game, the objective is to get rid of all your cards

NO_WRKSUBDIR=	yes
PLIST_FILES=	bin/eights

do-build:
	@cd ${WRKSRC} && ${CC} ${CFLAGS} ${PORTNAME}.c -o ${PORTNAME}

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/${PORTNAME} ${PREFIX}/bin

.include <bsd.port.mk>
