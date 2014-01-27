# Created by: Gerald Pfeifer <gerald@FreeBSD.org>
# $FreeBSD: lang/gcc-ecj45/Makefile 340722 2014-01-22 17:00:46Z mat $

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

do-install:
	${INSTALL_DATA} ${DISTDIR}/${DISTNAME} ${STAGEDIR}${PREFIX}/share/java

.include <bsd.port.mk>
