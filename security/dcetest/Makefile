# Ports collection makefile for:  dcetest
# Date created:			  Jan 11 2003
# Whom:				  Yonatan <onatan@gmail.com>
#
# $FreeBSD: ports/security/dcetest/Makefile,v 1.5 2012/11/17 06:01:03 svnexp Exp $
#

PORTNAME=	dcetest
PORTVERSION=	1.2
CATEGORIES=	security
MASTER_SITES=	${MASTER_SITE_PACKETSTORM}
MASTER_SITE_SUBDIR=	UNIX/scanners

MAINTAINER=	onatan@gmail.com
COMMENT=	Utility to dump MSRPC endpoint information from Windows systems

ALL_TARGET=	dcetest
MAKE_ARGS=	CC="${CC}"
WRKSRC=		${WRKDIR}/${PORTNAME}

PLIST_FILES=	bin/dcetest

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/dcetest ${PREFIX}/bin

.include <bsd.port.mk>
