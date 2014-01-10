# Created by: Alex Dupre <ale@FreeBSD.org>
# $FreeBSD: ports-mgmt/portconf/Makefile 337886 2013-12-28 17:45:18Z bapt $

PORTNAME=	portconf
PORTVERSION=	1.6
PORTREVISION=	1
CATEGORIES=	ports-mgmt
MASTER_SITES=	# none
DISTFILES=	# none

MAINTAINER=	ale@FreeBSD.org
COMMENT=	Universal tool to set specific port knobs

NO_BUILD=	yes
SUB_FILES=	pkg-message ${PORTNAME}.sh

PLIST_FILES=	libexec/${PORTNAME}

do-fetch:
	@${DO_NADA}

do-install:
	@${INSTALL_SCRIPT} ${WRKDIR}/${PORTNAME}.sh ${STAGEDIR}${PREFIX}/libexec/${PORTNAME}

.include <bsd.port.mk>
