# Created by: will
# $FreeBSD: archivers/unlzx/Makefile 323578 2013-07-24 08:19:07Z ehaupt $

PORTNAME=	unlzx
PORTVERSION=	1.1
CATEGORIES=	archivers
MASTER_SITES=	CRITICAL
DISTNAME=	${PORTNAME}.c
EXTRACT_SUFX=	.gz

MAINTAINER=	ehaupt@FreeBSD.org
COMMENT=	Extracts .lzx archives from Amiga systems

PLIST_FILES=	bin/unlzx

do-extract:
	${MKDIR} ${WRKSRC}
	${GZCAT} ${DISTDIR}/${DISTFILES} > ${WRKSRC}/${DISTNAME}

do-build:
	${CC} ${CFLAGS} -o ${WRKSRC}/${PORTNAME} ${WRKSRC}/${PORTNAME}.c

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/${PORTNAME} ${PREFIX}/bin

.include <bsd.port.mk>
