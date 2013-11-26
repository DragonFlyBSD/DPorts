# Created by: Christopher Preston <rbg@gayteenresource.org>
# $FreeBSD: games/nettoe/Makefile 334350 2013-11-19 20:24:55Z cs $

PORTNAME=	nettoe
PORTVERSION=	1.4.2
CATEGORIES=	games
MASTER_SITES=	SF \
		http://www.c-s.li/ports/

MAINTAINER=	cs@FreeBSD.org
COMMENT=	Tic tac toe game playable over the network

LICENSE=	GPLv2

PLIST_FILES=	bin/nettoe man/man6/nettoe.6.gz

USES=		gmake
GNU_CONFIGURE=	yes
PORTDOCS=	AUTHORS BUGS ChangeLog NEWS README TO-DO

.include <bsd.port.options.mk>

post-install:
.if ${PORT_OPTIONS:MDOCS}
	${MKDIR} ${STAGEDIR}${DOCSDIR}
.for I in ${PORTDOCS}
	${INSTALL_DATA} ${WRKSRC}/$I ${STAGEDIR}${DOCSDIR}/
.endfor
.endif

.include <bsd.port.mk>
