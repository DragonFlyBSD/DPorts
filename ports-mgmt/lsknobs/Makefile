# Created by: Gabriel Linder <linder.gabriel@gmail.com>
# $FreeBSD: ports-mgmt/lsknobs/Makefile 327762 2013-09-20 22:36:49Z bapt $

PORTNAME=	lsknobs
PORTVERSION=	1.0
CATEGORIES=	ports-mgmt
MASTER_SITES=	# none
DISTFILES=	# none

MAINTAINER=	linder.gabriel@gmail.com
COMMENT=	Simple script to help configure ports knobs and options

RUN_DEPENDS=	${LOCALBASE}/libexec/portconf:${PORTSDIR}/ports-mgmt/portconf

NO_BUILD=	yes
SUB_FILES=	pkg-message ${PORTNAME}.sh

PLIST_FILES=	sbin/${PORTNAME}

NO_STAGE=	yes
do-fetch:
	@${DO_NADA}

do-install:
	@${INSTALL_SCRIPT} ${WRKDIR}/${PORTNAME}.sh ${PREFIX}/sbin/${PORTNAME}
	@${CAT} ${PKGMESSAGE}

.include <bsd.port.mk>
