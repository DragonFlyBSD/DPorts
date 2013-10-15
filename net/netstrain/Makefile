# Created by: Janos.Mohacsi@bsd.hu
# $FreeBSD: net/netstrain/Makefile 327755 2013-09-20 22:10:23Z bapt $

PORTNAME=	netstrain
PORTVERSION=	3.0
CATEGORIES=	net ipv6
MASTER_SITES=	SF

MAINTAINER=	jmohacsi@bsd.hu
COMMENT=	Tool to measure practical TCP throughput between two machines

DOC_FILES=	README

NO_STAGE=	yes
do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/netstrain ${PREFIX}/bin
	${INSTALL_PROGRAM} ${WRKSRC}/netstraind ${PREFIX}/bin
.ifndef(NOPORTDOCS)
	@${MKDIR} ${DOCSDIR}
.for i in ${DOC_FILES}
	@${INSTALL_DATA} ${WRKSRC}/${i} ${DOCSDIR}
.endfor
.endif

.include <bsd.port.mk>
