# Created by: dikshie@sfc.wide.ad.jp
# $FreeBSD: net/iffinder/Makefile 327755 2013-09-20 22:10:23Z bapt $

PORTNAME=	iffinder
PORTVERSION=	1.37
CATEGORIES=	net
MASTER_SITES=	http://www.caida.org/tools/measurement/iffinder/download/

MAINTAINER=	dikshie@sfc.wide.ad.jp
COMMENT=	Tools for find other interfaces for same router

GNU_CONFIGURE=	yes

PLIST_FILES=	bin/iffinder
PORTDOCS=	README

NO_STAGE=	yes
do-install:
		${INSTALL_PROGRAM} ${WRKSRC}/iffinder ${PREFIX}/bin
.if !defined(NOPORTDOCS)
	${MKDIR} ${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/${PORTDOCS} ${DOCSDIR}
.endif

.include <bsd.port.mk>
