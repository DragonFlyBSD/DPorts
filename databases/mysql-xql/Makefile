# Created by: Mina R Waheeb <syncer@gmail.com>
# $FreeBSD: databases/mysql-xql/Makefile 327717 2013-09-20 16:13:47Z bapt $

PORTNAME=	mysql-xql
PORTVERSION=	1.0.0
PORTREVISION=	1
CATEGORIES=	databases
MASTER_SITES=	http://www.mysqludf.org/lib_mysqludf_xql/
DISTNAME=	lib_mysqludf_xql-${PORTVERSION}

MAINTAINER=	syncer@gmail.com
COMMENT=	Library provides XML output functions to MySQL server

USE_GNOME=	libxml2
GNU_CONFIGURE=	yes
USE_GMAKE=	yes
USE_MYSQL=	yes
USE_LDCONFIG=	yes

PLIST_FILES=	\
	lib/mysql/plugin/lib_mysqludf_xql.a \
	lib/mysql/plugin/lib_mysqludf_xql.la \
	lib/mysql/plugin/lib_mysqludf_xql.so

PLIST_DIRS=	lib/mysql/plugin

NO_STAGE=	yes
post-install:
	${CAT} ${PKGMESSAGE}

.include <bsd.port.mk>
