# Created by: Mike Smith <msmith@FreeBSD.org>
# $FreeBSD: ports-mgmt/pib/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	pib
PORTVERSION=	1.2
PORTREVISION=	2
CATEGORIES=	ports-mgmt tk
MASTER_SITES=	${MASTER_SITE_LOCAL}
MASTER_SITE_SUBDIR=	msmith

MAINTAINER=	ports@FreeBSD.org
COMMENT=	GUI Ports Collection management tool

USES=	tk:build

.include <bsd.port.pre.mk>

post-patch:
	${REINPLACE_CMD} 's/8.4/${TCL_VER}/g' ${WRKSRC}/Makefile
	${REINPLACE_CMD} 's/84/${TCL_VER:S,.,,}/g' ${WRKSRC}/Makefile
do-install:
	${MKDIR} ${STAGEDIR}${PREFIX}/lib/pib
	${INSTALL_SCRIPT} ${WRKSRC}/*.tcl ${STAGEDIR}${PREFIX}/lib/pib
	${INSTALL_DATA} ${WRKSRC}/libTkSteal.so.2* ${STAGEDIR}${PREFIX}/lib/pib
	${LN} -fs ${PREFIX}/lib/pib/pib.tcl ${STAGEDIR}${PREFIX}/bin/pib

.include <bsd.port.post.mk>
