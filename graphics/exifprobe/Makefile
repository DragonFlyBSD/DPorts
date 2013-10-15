# Created by: Michael Johnson <ahze@ahze.net>
# $FreeBSD: graphics/exifprobe/Makefile 327733 2013-09-20 18:35:44Z bapt $

PORTNAME=	exifprobe
DISTVERSION=	2.0.1
CATEGORIES=	graphics
MASTER_SITES=	http://mirror.amdmi3.ru/distfiles/

MAINTAINER=	amdmi3@FreeBSD.org
COMMENT=	Probes JPEG or TIFF images and reports contents and structure

MAN1=		exifgrep.1 exifprobe.1
PLIST_FILES=	bin/exifgrep bin/exifprobe

NO_STAGE=	yes
post-patch:
	@${REINPLACE_CMD} -e 's|cc|${CC}|; s|-DC|${CFLAGS} -DC|' \
		${WRKSRC}/${MAKEFILE}

do-install:
	@${INSTALL_SCRIPT} ${WRKSRC}/exifgrep ${PREFIX}/bin
	@${INSTALL_PROGRAM} ${WRKSRC}/exifprobe ${PREFIX}/bin
.for i in ${MAN1}
	@${INSTALL_MAN} ${WRKSRC}/${i} ${MAN1PREFIX}/man/man1
.endfor

.include <bsd.port.mk>
