# Created by: Yi-Jheng Lin <yzlin@FreeBSD.org>
# $FreeBSD: devel/shflags/Makefile 324852 2013-08-17 16:32:41Z bdrewery $

PORTNAME=	shflags
PORTVERSION=	1.0.3
CATEGORIES=	devel
MASTER_SITES=	GOOGLE_CODE
EXTRACT_SUFX=	.tgz

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Command-line flags module for Unix shell scripts

NO_BUILD=	yes
PLIST_FILES=	lib/shflags

do-install:
	${INSTALL_DATA} ${WRKSRC}/src/shflags ${PREFIX}/lib

.include <bsd.port.mk>
