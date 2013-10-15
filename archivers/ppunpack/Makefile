# Created by: will
# $FreeBSD: archivers/ppunpack/Makefile 328280 2013-09-25 12:45:36Z vanilla $

PORTNAME=	ppunpack
PORTVERSION=	1.0
CATEGORIES=	archivers
MASTER_SITES=	${MASTER_SITE_LOCAL}
MASTER_SITE_SUBDIR=	thierry
DISTNAME=	ppsmall-${PORTVERSION}
EXTRACT_SUFX=	.tar.Z

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Decompresses Amiga PowerPacker files

NO_CDROM=	No commercial redistribution

WRKSRC=		${WRKDIR}/PPUnpack
MAKE_ARGS=	CC="${CC}" COPTS="${CFLAGS}"
PLIST_FILES=	bin/ppunpack
ALL_TARGET=	ppunpack

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/ppunpack ${STAGEDIR}/${PREFIX}/bin

.include <bsd.port.mk>
