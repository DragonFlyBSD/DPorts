# Created by: Edwin Mons
# $FreeBSD: games/xtrojka/Makefile 327730 2013-09-20 17:36:33Z bapt $

PORTNAME=	xtrojka
PORTVERSION=	1.1
PORTREVISION=	3
CATEGORIES=	games
MASTER_SITES=	ftp://ftp.funet.fi/pub/unix/games/
DISTNAME=	${PORTNAME}

MAINTAINER=	e@ik.nu
COMMENT=	Game of skill similar to T*tris

USE_XORG=	x11 xt xproto xaw
WRKSRC=		${WRKDIR}
MAN6=		xtrojka.6
MANCOMPRESSED=	yes

NO_STAGE=	yes
pre-install:
	${MKDIR} ${PREFIX}/share/xtrojka

post-install:
	${STRIP_CMD} ${PREFIX}/bin/xtrojka

.include <bsd.port.mk>
