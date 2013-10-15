# Created by: David O'Brien (obrien@NUXI.com)
# $FreeBSD: security/ddos_scan/Makefile 327769 2013-09-20 22:55:24Z bapt $

PORTNAME=	ddos_scan
PORTVERSION=	1.6
PORTREVISION=	1
CATEGORIES=	security
MASTER_SITES=	http://staff.washington.edu/dittrich/misc/
DISTNAME=	${PORTNAME}
EXTRACT_SUFX=	.tar

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Scans for a limited set of distributed denial of service agents

ALL_TARGET=	dds

NO_STAGE=	yes
do-install:
	@${INSTALL_PROGRAM} ${WRKSRC}/dds ${PREFIX}/sbin
.if !defined(NOPORTDOCS)
	@${MKDIR} ${DOCSDIR}
	@${INSTALL_MAN} ${WRKSRC}/README ${DOCSDIR}
.endif

.include <bsd.port.mk>
