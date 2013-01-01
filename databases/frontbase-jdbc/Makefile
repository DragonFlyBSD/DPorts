# Created by: Quinton Dolan <q@onthenet.com.au>
# $FreeBSD: ports/databases/frontbase-jdbc/Makefile,v 1.6 2012/12/10 13:24:55 svnexp Exp $

PORTNAME=	frontbase
PORTVERSION=	2.5.6
CATEGORIES=	databases java
MASTER_SITES+=	http://www.frontbase.com/download/JDBC/
PKGNAMESUFFIX=	-jdbc
DISTNAME=	FrontBaseJDBC-${PORTVERSION}
EXTRACT_SUFX=	.tar

MAINTAINER?=	ports@FreeBSD.org
COMMENT=	The Java JDBC implementation for FrontBase

USE_JAVA=	yes
JAVA_VERSION=	1.6+

NO_BUILD=	yes
JARFILE=	frontbasejdbc.jar
PLIST_FILES=	%%JAVAJARDIR%%/${JARFILE}

SUB_FILES+=	pkg-message
PKGMESSAGE=	${WRKDIR}/pkg-message

do-install:
	@${INSTALL_DATA} ${WRKSRC}/${JARFILE} ${JAVAJARDIR}/${JARFILE}

post-install:
	@${CAT} ${PKGMESSAGE}

.include <bsd.port.mk>
