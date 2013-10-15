# Created by: mich@freebsdcluster.org
# $FreeBSD: sysutils/wtail/Makefile 327772 2013-09-20 23:05:58Z bapt $

PORTNAME=	wtail
PORTVERSION=	0.2.2
CATEGORIES=	sysutils
MASTER_SITES=	http://www.teaser.fr/~amajorel/wtail/

MAINTAINER=	mich@FreeBSD.org
COMMENT=	Wtail does the equivalent of tail -f on several files at once

NO_STAGE=	yes
do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/wtail ${PREFIX}/bin
.if !defined(NOPORTDOCS)
	${MKDIR} ${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/README ${DOCSDIR}/README
.endif

.include <bsd.port.mk>
