# Created by: Stefan Bethke <stb@lassitu.de>
# $FreeBSD: devel/firmware-utils/Makefile 327723 2013-09-20 17:04:43Z bapt $

PORTNAME=	firmware-utils
PORTVERSION=	20111222
CATEGORIES=	devel
MASTER_SITES=	http://www.transit.hanse.de/mirror/svn.openwrt.org/firmware-utils/

MAINTAINER=	stb@assitu.de
COMMENT=	Create device firmware images

USE_BZIP2=	yes

MAKEFILE=	${FILESDIR}/Makefile
MAKE_ARGS+=	INSTALL_PROGRAM="${INSTALL_PROGRAM}" PREFIX=${PREFIX}

NO_STAGE=	yes
.include <bsd.port.mk>
