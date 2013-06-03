# Created by: Nicolas de Bari Embriz <nbari@dalmp.com>
# $FreeBSD: databases/dalmp/Makefile 318115 2013-05-13 15:47:47Z miwi $

PORTNAME=	dalmp
PORTVERSION=	2.1
CATEGORIES=	databases
MASTER_SITES=	GOOGLE_CODE

MAINTAINER=	nbari@dalmp.com
COMMENT=	Database Abstraction Layer for MySQL using PHP

LICENSE=	BSD

USE_BZIP2=	YES

DEFAULT_PHP_VER=5

NO_BUILD=	YES
USE_PHP=	pcre mysql mysqli session memcache sqlite3 curl

do-install:
	@${MKDIR} ${DATADIR}
	@${CP} -R ${WRKSRC}/ ${DATADIR}

.include <bsd.port.mk>
