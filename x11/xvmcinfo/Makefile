# Created by: Bruce M Simpson <bms@FreeBSD.org>
# $FreeBSD: x11/xvmcinfo/Makefile 336621 2013-12-16 11:11:09Z zeising $

PORTNAME=	xvmcinfo
PORTVERSION=	0.1
CATEGORIES=	x11
DISTFILES=

MAINTAINER=	x11@FreeBSD.org
COMMENT=	Print out XvMC extension adaptor information

USE_XORG=	xvmc xv x11

LDFLAGS+=	-lXvMC -lXv -lX11
NO_WRKSUBDIR=	defined

PLIST_FILES=	bin/xvmcinfo

do-build:
	${CC} ${CFLAGS} ${CPPFLAGS} \
	    -I${LOCALBASE}/include -L${LOCALBASE}/lib \
	    -o ${WRKSRC}/xvmcinfo ${FILESDIR}/xvmcinfo.c ${LDFLAGS}

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/xvmcinfo ${STAGEDIR}${PREFIX}/bin

.include <bsd.port.mk>
