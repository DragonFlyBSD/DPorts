# Created by: Mark Pulford <mark@kyne.com.au>
# $FreeBSD: games/deal/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	deal
PORTVERSION=	2.5
CATEGORIES=	games
MASTER_SITES=	http://catb.org/~esr/deal/

MAINTAINER=	gahr@FreeBSD.org
COMMENT=	A calculator for card-draw probabilities

MAN1=		deal.1
PLIST_FILES=	bin/deal

CFLAGS+=	-lm

NO_STAGE=	yes
do-build:
	cd ${WRKSRC} && ${CC} ${CFLAGS} -o deal deal.c

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/deal ${PREFIX}/bin
	${INSTALL_DATA} ${WRKSRC}/deal.1 ${PREFIX}/man/man1

.include <bsd.port.pre.mk>

.if ${ARCH} == "ia64"
BROKEN=		Does not compile on ia64
.endif

.include <bsd.port.post.mk>
