# Created by: Emanuel Haupt <ehaupt@FreeBSD.org>
# $FreeBSD: sysutils/edid-decode/Makefile 331353 2013-10-23 07:14:05Z ehaupt $

PORTNAME=	edid-decode
PORTVERSION=	0.1.20121128
CATEGORIES=	sysutils
MASTER_SITES=	CRITICAL

MAINTAINER=	ehaupt@FreeBSD.org
COMMENT=	Decodes binary EDID information from monitors

LICENSE=	MIT

USE_XZ=		yes

PLIST_FILES=	bin/edid-decode

do-build:
	${CC} ${CFLAGS} ${WRKSRC}/${PORTNAME}.c -o ${WRKSRC}/${PORTNAME}

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/${PORTNAME} ${STAGEDIR}${PREFIX}/bin

.include <bsd.port.mk>
