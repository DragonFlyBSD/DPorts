# New ports collection makefile for:	shflags
# Date created:		2009-12-17
# Whom:			Yi-Jheng Lin <yzlin@FreeBSD.org>
#
# $FreeBSD: ports/devel/shflags/Makefile,v 1.2 2012/11/17 05:57:03 svnexp Exp $
#

PORTNAME=	shflags
PORTVERSION=	1.0.3
CATEGORIES=	devel
MASTER_SITES=	GOOGLE_CODE
EXTRACT_SUFX=	.tgz

MAINTAINER=	yzlin@FreeBSD.org
COMMENT=	Command-line flags module for Unix shell scripts

NO_BUILD=	yes
PLIST_FILES=	lib/shflags

do-install:
	${INSTALL_DATA} ${WRKSRC}/src/shflags ${PREFIX}/lib

.include <bsd.port.mk>
