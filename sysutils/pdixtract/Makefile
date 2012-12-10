# New ports collection makefile for:	pdixtract
# Date created:				Mon Jul  4 23:21:23 CEST 2005
# Whom:					Markus Brueffer <markus@FreeBSD.org>
#
# $FreeBSD: ports/sysutils/pdixtract/Makefile,v 1.5 2012/11/17 06:01:41 svnexp Exp $
#

PORTNAME=	pdixtract
PORTVERSION=	1.5
CATEGORIES=	sysutils
MASTER_SITES=	${MASTER_SITE_LOCAL}
MASTER_SITE_SUBDIR=	markus
DISTNAME=	PDITOOL

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Extracts or converts .pdi file sets to .iso

WRKSRC=		${WRKDIR}
USE_ZIP=	yes

PLIST_FILES=	bin/pdixtract

do-build:
	cd ${WRKDIR}; ${CC} ${CFLAGS} pdixtract.c -o pdixtract

do-install:
	${INSTALL_PROGRAM} ${WRKDIR}/pdixtract ${PREFIX}/bin

.include <bsd.port.mk>
