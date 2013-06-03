# Created by: rfarmer@predatorlabs.net
# $FreeBSD: graphics/xmlgraphics-commons/Makefile 318222 2013-05-15 08:17:23Z miwi $

PORTNAME=	xmlgraphics-commons
PORTVERSION=	1.5
DISTVERSIONSUFFIX=	-src
CATEGORIES=	graphics textproc java
MASTER_SITES=	APACHE/xmlgraphics/commons/source

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Several reusable components used by Apache Batik and FOP

LICENSE=	AL2

WRKSRC=		${WRKDIR}/${PORTNAME}-${PORTVERSION}

USE_JAVA=	yes
JAVA_VERSION=	1.6+
USE_ANT=	yes

PLIST_FILES=	%%JAVAJARDIR%%/${PORTNAME}.jar

do-install:
	${INSTALL_DATA} ${WRKSRC}/build/${PORTNAME}-${PORTVERSION}.jar \
		${JAVAJARDIR}/${PORTNAME}.jar

.include <bsd.port.mk>
