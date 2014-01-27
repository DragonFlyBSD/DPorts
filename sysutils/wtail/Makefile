# Created by: mich@freebsdcluster.org
# $FreeBSD: sysutils/wtail/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	wtail
PORTVERSION=	0.2.2
CATEGORIES=	sysutils
MASTER_SITES=	http://www.teaser.fr/~amajorel/wtail/

MAINTAINER=	mich@FreeBSD.org
COMMENT=	Wtail does the equivalent of tail -f on several files at once

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/wtail ${STAGEDIR}${PREFIX}/bin
	${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/README ${STAGEDIR}${DOCSDIR}/README

.include <bsd.port.mk>
