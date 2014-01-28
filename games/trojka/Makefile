# Created by: Edwin Mons
# $FreeBSD: games/trojka/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	trojka
PORTVERSION=	1.0
CATEGORIES=	games
MASTER_SITES=	ftp://ftp.funet.fi/pub/unix/games/
DISTNAME=	${PORTNAME}

MAINTAINER=	e@ik.nu
COMMENT=	A game of skill

MAN6=		trojka.6
SUB_FILES=	pkg-message

NO_STAGE=	yes
post-install:
	@${CAT} ${PKGMESSAGE}

.include <bsd.port.mk>
