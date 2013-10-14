# Created by: Gerald Pfeifer <gerald@FreeBSD.org>
# $FreeBSD: lang/gcc-ecj45/Makefile 327741 2013-09-20 19:53:09Z bapt $

PORTNAME=	gcc-ecj
PORTVERSION=	4.5
CATEGORIES=	lang java
MASTER_SITES=	${MASTER_SITE_SOURCEWARE}
MASTER_SITE_SUBDIR+=	java/
DISTNAME=	ecj-${PORTVERSION}.jar
EXTRACT_SUFX=
EXTRACT_ONLY=

MAINTAINER=	gerald@FreeBSD.org
COMMENT=	Eclipse Java Compiler used to build GCC Java

NO_BUILD=	yes
PLIST_FILES=	share/java/${DISTNAME}

NO_STAGE=	yes
do-install:
	${INSTALL_DATA} ${DISTDIR}/${DISTNAME} ${PREFIX}/share/java/

.include <bsd.port.mk>
