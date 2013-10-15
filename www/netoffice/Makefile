# Created by: Marcelo Araujo <araujo@bsdmail.org>
# $FreeBSD: www/netoffice/Makefile 327776 2013-09-20 23:36:50Z bapt $

PORTNAME=	netoffice
PORTVERSION=	2.6.0b2
PORTREVISION=	1
CATEGORIES=	www
MASTER_SITES=	SF/${PORTNAME}/${PORTNAME}-devel/${PORTVERSION}

MAINTAINER=	araujo@FreeBSD.org
COMMENT=	NetOffice is a free web based project-management environment

NO_BUILD=	yes
USER_MYSQL=	yes
USE_PHP=	mysql pcre zlib session xml gd
WANT_PHP_WEB=	yes

WEBOWN?=	www
WEBGRP?=	www
APACHEDIR=	${LOCALBASE}/www/
INSTALLDIR=	${APACHEDIR}/${PORTNAME}

NO_STAGE=	yes
do-install:
	${MKDIR} ${INSTALLDIR}
	cd ${WRKSRC}; ${FIND} . \
		| ${CPIO} -pdm -R ${WEBOWN}:${WEBGRP} ${INSTALLDIR}

.include <bsd.port.mk>
