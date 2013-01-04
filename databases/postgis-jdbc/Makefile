# Created by: Sam Lawrance <boris@brooknet.com.au>
# $FreeBSD: ports/databases/postgis-jdbc/Makefile,v 1.21 2012/12/10 13:24:55 svnexp Exp $

PORTNAME=	postgis-jdbc
PORTVERSION=	1.4.0
CATEGORIES=	databases java geography
MASTER_SITES=	http://freebsd.unixfreunde.de/sources/
DISTFILES=	postgis_${PORTVERSION}.jar

MAINTAINER=	wenheping@gmail.com
COMMENT=	PostGIS spatial data structures for JDBC

RUN_DEPENDS=	${JAVALIBDIR}/postgresql.jar:${PORTSDIR}/databases/postgresql-jdbc

USE_JAVA=	yes
JAVA_VERSION=	1.6+
NO_BUILD=	yes

PLIST_FILES=	%%JAVAJARDIR%%/postgis_1.4.0.jar

do-install:
	${INSTALL_DATA} ${_DISTDIR}postgis_${PORTVERSION}.jar ${JAVAJARDIR}

.include <bsd.port.mk>
