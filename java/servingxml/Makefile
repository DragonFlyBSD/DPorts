# Created by: jpbeconne
# $FreeBSD: java/servingxml/Makefile 327738 2013-09-20 19:48:32Z bapt $

PORTNAME=	servingxml
PORTVERSION=	1.1.2
CATEGORIES=	java devel
MASTER_SITES=	SF

MAINTAINER=	jpbeconne@free.fr
COMMENT=	Framework for flat/XML data transformations

BUILD_DEPENDS=	${ANT_CMD}:${PORTSDIR}/devel/apache-ant

USE_ZIP=	yes
USE_JAVA=	yes
JAVA_VERSION=	1.6+
ANT_CMD?=	${LOCALBASE}/bin/ant
ANT=	${SETENV} JAVA_HOME=${JAVA_HOME} ${ANT_CMD}
ANT_TARGETS=	dist
JAVA_BUILD=	yes
FETCH_ARGS=	-pRr

NO_STAGE=	yes
do-build:
	@cd ${WRKSRC} && ${ANT} ${ANT_TARGETS}

do-install:
	${MKDIR} ${JAVASHAREDIR}/${PORTNAME}
	(cd ${WRKSRC}/target/${PORTNAME} && ${COPYTREE_SHARE} \* ${JAVASHAREDIR}/${PORTNAME})
	${CHMOD} 555 ${JAVASHAREDIR}/${PORTNAME}
	${CHMOD} 555 ${JAVASHAREDIR}/${PORTNAME}/${PORTNAME}
post-install:
	${CAT} pkg-message
.include <bsd.port.mk>
