# New ports collection makefile for:	galaxis
# Date created:				30 June 1997
# Whom:					Andrey Zakhvatov
#
# $FreeBSD: ports/games/galaxis/Makefile,v 1.21 2012/11/17 05:57:39 svnexp Exp $
#

PORTNAME=	galaxis
PORTVERSION=	1.8
CATEGORIES=	games
MASTER_SITES=	http://www.catb.org/~esr/galaxis/

MAINTAINER=	nemysis@gmx.ch
COMMENT=	Clone of the nifty little Macintosh game

MAKE_ARGS=	CC="${CC}" CFLAGS="${CFLAGS} -DNDEBUG"
ALL_TARGET=	${PORTNAME}
USE_GMAKE=	yes

MAN6=		${PORTNAME}.6
PLIST_FILES=	bin/${PORTNAME}

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/${PORTNAME} ${PREFIX}/bin/
	${INSTALL_MAN} ${WRKSRC}/${PORTNAME}.6 ${MAN6PREFIX}/man/man6/

.include <bsd.port.mk>
