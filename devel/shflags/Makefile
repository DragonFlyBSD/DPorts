# Created by: Yi-Jheng Lin <yzlin@FreeBSD.org>
# $FreeBSD: devel/shflags/Makefile 327726 2013-09-20 17:17:44Z bapt $

PORTNAME=	shflags
PORTVERSION=	1.0.3
CATEGORIES=	devel
MASTER_SITES=	GOOGLE_CODE
EXTRACT_SUFX=	.tgz

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Command-line flags module for Unix shell scripts

NO_BUILD=	yes
PLIST_FILES=	lib/shflags

NO_STAGE=	yes
do-install:
	${INSTALL_DATA} ${WRKSRC}/src/shflags ${PREFIX}/lib

.include <bsd.port.mk>
