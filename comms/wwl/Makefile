# Created by: db
# $FreeBSD: comms/wwl/Makefile 337833 2013-12-28 05:03:44Z db $

PORTNAME=	wwl
PORTVERSION=	1.3
CATEGORIES=	comms hamradio astro geography
MASTER_SITES=	http://www.db.net/downloads/ \
		${MASTER_SITE_LOCAL}
MASTER_SITE_SUBDIR=	db
DISTNAME=	${PORTNAME}+db-${PORTVERSION}

MAINTAINER=	db@FreeBSD.org
COMMENT=	Calculates distance (qrb) used in Amateur Radio

CONFLICTS=	locator*

do-install:
	@${INSTALL_PROGRAM} ${WRKSRC}/wwl ${STAGEDIR}${PREFIX}/bin
	@${RM} -f ${STAGEDIR}${PREFIX}/bin/locator
	@${LN} -sf wwl ${STAGEDIR}${PREFIX}/bin/locator
	@${INSTALL_DATA} ${WRKSRC}/wwl.1 ${STAGEDIR}${MANPREFIX}/man/man1
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	@${INSTALL_DATA} ${WRKSRC}/INSTALL ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
