# Created by: Gea-Suan Lin <gslin@gslin.org>
# $FreeBSD: textproc/apache-solr3/Makefile 330275 2013-10-14 06:52:32Z bapt $

PORTNAME=	apache-solr
PORTVERSION=	3.6.2
CATEGORIES=	textproc java
MASTER_SITES=	APACHE
MASTER_SITE_SUBDIR=	lucene/solr/${PORTVERSION}/
EXTRACT_SUFX=	.tgz
PKGNAMESUFFIX=	3

MAINTAINER=	gaod@hychen.org
COMMENT=	High performance search server built using Lucene Java

LICENSE=	AL2

CONFLICT=	apache-solr-4.1.*

JAVA_VERSION=	1.6+
NO_BUILD=	yes
PLIST_SUB+=	PORTVERSION="${PORTVERSION}"
USE_JAVA=	yes
PORTEXAMPLES=	*

NO_STAGE=	yes
do-install:
	cd ${WRKSRC}/dist && ${COPYTREE_SHARE} \* ${JAVAJARDIR}
.if !defined(NOPORTEXAMPLES)
	${MKDIR} ${EXAMPLESDIR}
	cd ${WRKSRC}/example && ${COPYTREE_SHARE} \* ${EXAMPLESDIR}
.endif

.include <bsd.port.mk>
