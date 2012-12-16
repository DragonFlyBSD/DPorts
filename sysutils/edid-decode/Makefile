# Created by: Emanuel Haupt <ehaupt@FreeBSD.org>
# $FreeBSD: ports/sysutils/edid-decode/Makefile,v 1.3 2012/11/28 22:35:47 svnexp Exp $

PORTNAME=	edid-decode
PORTVERSION=	0.1.20121128
CATEGORIES=	sysutils
MASTER_SITES=	CRITICAL

MAINTAINER=	ehaupt@FreeBSD.org
COMMENT=	Decodes binary EDID information from monitors

LICENSE=	MIT

USE_XZ=		yes
MAKE_JOBS_SAFE=	yes

PLIST_FILES=	bin/edid-decode

do-build:
	${CC} ${CFLAGS} ${WRKSRC}/${PORTNAME}.c -o ${WRKSRC}/${PORTNAME}

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/${PORTNAME} ${PREFIX}/bin

.include <bsd.port.mk>
