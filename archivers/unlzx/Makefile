# Created by: will
# $FreeBSD: archivers/unlzx/Makefile 331324 2013-10-22 21:13:49Z ehaupt $

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
	${INSTALL_PROGRAM} ${WRKSRC}/${PORTNAME} ${STAGEDIR}${PREFIX}/bin

.include <bsd.port.mk>
