# Created by: Andrey Zakhvatov
# $FreeBSD: games/bs/Makefile 324744 2013-08-14 22:35:50Z ak $

PORTNAME=	bs
PORTVERSION=	2.9
CATEGORIES=	games
MASTER_SITES=	http://www.catb.org/~esr/bs/

MAINTAINER=	nemysis@gmx.ch
COMMENT=	Battleships solitaire game with a color interface

LICENSE=	GPLv2

MAKE_ARGS=	CC="${CC}"
ALL_TARGET=	# empty
USE_GMAKE=	yes

MAN6=		bs.6
PLIST_FILES=	bin/bs

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/bs ${PREFIX}/bin
	${INSTALL_MAN} ${MAN6:S|^|${WRKSRC}/|} ${MAN6PREFIX}/man/man6

.include <bsd.port.mk>
