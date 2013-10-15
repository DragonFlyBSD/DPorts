# Created by: Yasuhiro Fukuma <yasuf@big.or.jp>
# $FreeBSD: www/npc/Makefile 327776 2013-09-20 23:36:50Z bapt $

PORTNAME=	npc
PORTVERSION=	0.83
CATEGORIES=	www
MASTER_SITES=	http://www2.biglobe.ne.jp/%7Enir/soft/

MAINTAINER=	yasuf@big.or.jp
COMMENT=	An animated web counter

WRKSRC=		${WRKDIR}/${DISTNAME}/src
MAKE_ARGS=	INDEX_DIR="${INDEX_DIR}"

INDEX_DIR=	${PREFIX}/etc/npc

NO_STAGE=	yes
do-install:
	${MKDIR} ${PREFIX}/www/cgi-bin
	cd ${WRKSRC}; \
	    ${INSTALL_PROGRAM} npc.cgi ${PREFIX}/www/cgi-bin
	${MKDIR} ${PREFIX}/share/examples/npc
	cd ${WRKSRC}/../conf; \
	    ${INSTALL_DATA} sample1.idx sample2.idx ${PREFIX}/share/examples/npc
	${MKDIR} ${INDEX_DIR}

post-install:
	@${CAT} ${PKGMESSAGE}

.include <bsd.port.mk>
