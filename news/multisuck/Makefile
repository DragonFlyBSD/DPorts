# Created by: ijliao
# $FreeBSD: news/multisuck/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	multisuck
PORTVERSION=	1.0.4
CATEGORIES=	news
MASTER_SITES=	SF/${PORTNAME}/${PORTNAME}/${PORTNAME}-${PORTVERSION}

MAINTAINER=	conrads@cox.net
COMMENT=	Multi-server/conn news suck

GNU_CONFIGURE=	yes

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/msuck ${STAGEDIR}${PREFIX}/bin
	@${MKDIR} ${STAGEDIR}${EXAMPLESDIR}
	${INSTALL_DATA} ${WRKSRC}/samples/*.sample ${STAGEDIR}${EXAMPLESDIR}

.include <bsd.port.mk>
