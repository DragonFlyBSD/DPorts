# Created by: Greg Larkin <glarkin@FreeBSD.org>
# $FreeBSD: ports/devel/statcvs/Makefile,v 1.7 2012/12/10 11:29:55 svnexp Exp $

PORTNAME=	statcvs
PORTVERSION=	0.7.0
CATEGORIES=	devel java
MASTER_SITES=	SF/${PORTNAME}/Download%20StatCVS/${PORTVERSION}
DISTNAME=	${PORTNAME}-${PORTVERSION}-source

MAINTAINER=	glarkin@FreeBSD.org
COMMENT=	CVS repository activity report generator

RUN_DEPENDS=	java:${PORTSDIR}/java/javavmwrapper

WRKSRC=		${WRKDIR}/${PORTNAME}-${PORTVERSION}
DATADIR=	${JAVASHAREDIR}/${PORTNAME}

USE_ZIP=	yes
USE_JAVA=	yes
USE_ANT=	yes
JAVA_VERSION=	1.6+

.if !defined(NOPORTDOCS)
ALL_TARGET=	jar javadoc
.else
ALL_TARGET=	jar
.endif

SUB_FILES=	pkg-message

do-install:
	@cd ${WRKSRC}/dist && ${COPYTREE_SHARE} . ${DATADIR}
.if !defined(NOPORTDOCS)
	@cd ${WRKSRC}/doc && ${COPYTREE_SHARE} . ${DOCSDIR}
.endif

post-install:
	@${CAT} ${PKGMESSAGE}

.include <bsd.port.mk>
