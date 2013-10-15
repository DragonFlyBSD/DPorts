# Created by: Kimura Fuyuki <fuyuki@mj.0038.net>
# $FreeBSD: textproc/dtd2relax/Makefile 327773 2013-09-20 23:17:30Z bapt $

PORTNAME=	dtd2relax
PORTVERSION=	1.1.1
PORTREVISION=	2
CATEGORIES=	textproc java
MASTER_SITES=	http://www.horobi.com/Projects/RELAX/Archive/
DISTNAME=	${PORTNAME:tu}_${PORTVERSION:S/./_/g}
DISTFILES=	${JARFILE} ${DISTNAME}-src${EXTRACT_SUFX}
EXTRACT_ONLY=	${DISTNAME}-src${EXTRACT_SUFX}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	DTD to RELAX converter for Java

USE_ZIP=	yes
USE_JAVA=	yes
NO_BUILD=	yes

JARFILE=	${DISTNAME}-bin-XML4J.jar
.if !defined(NOPORTDOCS)
PORTDOCS=	*
.endif

NO_STAGE=	yes
do-install:
	${INSTALL_DATA} ${DISTDIR}/${JARFILE} ${JAVAJARDIR}/${PORTNAME}.jar

.if !defined(NOPORTDOCS)
post-install:
	${MKDIR} ${EXAMPLESDIR}
	${INSTALL_DATA} ${WRKSRC}/samples/* ${EXAMPLESDIR}
	${MKDIR} ${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/docs/* ${DOCSDIR}
.endif

.include <bsd.port.mk>
