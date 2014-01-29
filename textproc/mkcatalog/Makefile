# Created by: shige
# $FreeBSD: textproc/mkcatalog/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	mkcatalog
PORTVERSION=	1.1
CATEGORIES=	textproc
MASTER_SITES=	# none
DISTFILES=	# none

MAINTAINER=	ports@FreeBSD.org
COMMENT=	A maintenance utility for sgml catalog files

NO_WRKSUBDIR=	yes
NO_BUILD=	yes
PLIST_FILES=	sbin/mkcatalog
SCRIPTS_ENV=	CONFIGURE_TARGETS=${CONFIGURE_TARGETS}

SRC=			${.CURDIR}/src
CONFIGURE_TARGETS=	mkcatalog

NO_STAGE=	yes
do-fetch:
	@${DO_NADA}

pre-configure:
	@for i in ${CONFIGURE_TARGETS} ; do \
	    ${CP} ${SRC}/$${i}.in ${WRKDIR} ; \
	done

do-install:
	@${INSTALL_SCRIPT} ${WRKDIR}/mkcatalog ${PREFIX}/sbin/mkcatalog

.include <bsd.port.mk>
