# Created by: Pascal Vizeli <pvizeli@yahoo.de>
# $FreeBSD: multimedia/gpac-mp4box/Makefile 332289 2013-10-31 21:33:48Z wg $

PORTNAME=	mp4box
DISTVERSION=	0.5.0
CATEGORIES=	multimedia
MASTER_SITES=	SF/gpac/GPAC/GPAC%20${PORTVERSION}
PKGNAMEPREFIX=	gpac-
DISTNAME=	gpac-${DISTVERSION}

MAINTAINER=	pvizeli@yahoo.de
COMMENT=	Tool for merge mpg4 from Gpac

LICENSE=	LGPL21

LIB_DEPENDS=	libgpac.so:${PORTSDIR}/multimedia/gpac-libgpac

CFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib -lgpac

WRKSRC=		${WRKDIR}/gpac/applications/mp4box
PLIST_FILES=	bin/mp4box man/man1/mp4box.1.gz

do-build:
	cd ${WRKSRC} && ${CC} ${CFLAGS} ${LDFLAGS} -o mp4box \
		filedump.c fileimport.c live.c main.c

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/mp4box ${STAGEDIR}${PREFIX}/bin/mp4box
	${INSTALL_MAN} ${WRKSRC}/../../doc/man/mp4box.1 \
		${STAGEDIR}${PREFIX}/man/man1/mp4box.1

.include <bsd.port.mk>
