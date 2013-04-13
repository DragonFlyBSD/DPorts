# Created by: David O'Brien (obrien@NUXI.com)
# $FreeBSD: security/gag/Makefile 315566 2013-03-29 19:33:41Z cs $
#

PORTNAME=	gag
PORTVERSION=	2.9
CATEGORIES=	security
MASTER_SITES=	http://staff.washington.edu/dittrich/misc/
DISTNAME=	sickenscan
EXTRACT_SUFX=	.tar

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Stacheldraht (DOS attack) agent detector

LATEST_LINK=	gag-sickenscan

ALL_TARGET=	gag

PORTDOCS=	README
PLIST_FILES=	sbin/gag

do-install:
	@${INSTALL_PROGRAM} ${WRKSRC}/gag ${PREFIX}/sbin
.if !defined(NOPORTDOCS)
	${MKDIR} ${DOCSDIR}
	${INSTALL_MAN} ${WRKSRC}/${PORTDOCS} ${DOCSDIR}
.endif

.include <bsd.port.mk>
