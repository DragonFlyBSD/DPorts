# New ports collection makefile for:	autobackupmysql
# Date created:		2009-12-21
# Whom:			Frank Wall <fw@moov.de>
#
# $FreeBSD: ports/databases/autobackupmysql/Makefile,v 1.4 2012/11/17 05:55:05 svnexp Exp $
#

PORTNAME=	autobackupmysql
PORTVERSION=	1.4
CATEGORIES=	databases
MASTER_SITES=	SF/${PORTNAME}
DISTNAME=	${PORTNAME}
EXTRACT_SUFX=	.sh

MAINTAINER=	fw@moov.de
COMMENT=	Make daily, weekly, and monthly backups of your MySQL databases

RUN_DEPENDS=	${LOCALBASE}/bin/bash:${PORTSDIR}/shells/bash

NO_BUILD=	yes
PLIST_FILES=	sbin/autobackupmysql.sh

do-extract:
	${MKDIR} ${WRKSRC}
	${CP} ${DISTDIR}/${DISTFILES} ${WRKSRC}

post-patch:
	@${REINPLACE_CMD} -e 's|/usr/local|${LOCALBASE}|g' ${WRKSRC}/autobackupmysql.sh
	@${REINPLACE_CMD} -e 's|${LOCALBASE}/etc|${PREFIX}/etc|g' ${WRKSRC}/autobackupmysql.sh

do-install:
	${INSTALL_SCRIPT} ${WRKSRC}/${PORTNAME}.sh ${PREFIX}/sbin

.include <bsd.port.mk>
