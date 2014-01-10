# Created by: ijliao
# $FreeBSD: news/multisuck/Makefile 337684 2013-12-27 10:12:13Z bapt $

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
