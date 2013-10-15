# Created by: db
# $FreeBSD: comms/wwl/Makefile 327714 2013-09-20 16:03:29Z bapt $

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
PORTDOCS=	INSTALL
PLIST_FILES=	bin/wwl bin/locator
MAN1=		wwl.1

NO_STAGE=	yes
do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/wwl ${PREFIX}/bin
	${RM} -f ${PREFIX}/bin/locator
	${LN} ${PREFIX}/bin/wwl ${PREFIX}/bin/locator
	${INSTALL_DATA} ${WRKSRC}/wwl.1 ${MANPREFIX}/man/man1
.if !defined(NOPORTDOCS)
	${MKDIR} ${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/INSTALL ${DOCSDIR}
.endif

.include <bsd.port.mk>
