# Created by: Yasuhiro Fukuma <yasuf@big.or.jp>
# $FreeBSD: www/npc/Makefile 340722 2014-01-22 17:00:46Z mat $

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
