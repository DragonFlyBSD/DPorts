# Created by: Tim Welch <ports@thepentagon.org>
# $FreeBSD: sysutils/dvdimagecmp/Makefile 327772 2013-09-20 23:05:58Z bapt $

PORTNAME=	dvdimagecmp
PORTVERSION=	0.3
CATEGORIES=	sysutils
MASTER_SITES=	${MASTER_SITE_SUNSITE}
MASTER_SITE_SUBDIR=	apps/video
EXTRACT_SUFX=	.tgz

MAINTAINER=	ports@thepentagon.org
COMMENT=	A simple tool for comparing an image to a burned disc

USE_GMAKE=	yes
CFLAGS+=	-D_LARGEFILE_SOURCE -D_FILE_OFFSET_BITS=64

PLIST_FILES=	bin/dvdimagecmp

NO_STAGE=	yes
do-build:
	(cd ${WRKSRC}; ${CC} ${CFLAGS} -o dvdimagecmp dvdimagecmp.c )

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/dvdimagecmp ${PREFIX}/bin

.include <bsd.port.mk>
