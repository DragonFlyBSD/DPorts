# New ports collection makefile for:	unlzx
# Date created:				Sat 3 June 2000
# Whom:					will
#
# $FreeBSD: ports/archivers/unlzx/Makefile,v 1.15 2012/11/17 05:54:24 svnexp Exp $
#

PORTNAME=	unlzx
PORTVERSION=	1.1
CATEGORIES=	archivers
MASTER_SITES=	CRITICAL
DISTNAME=	${PORTNAME}.c
EXTRACT_SUFX=	.gz

MAINTAINER=	ehaupt@FreeBSD.org
COMMENT=	Extracts .lzx archives from Amiga systems

MAKE_JOBS_SAFE=	yes

PLIST_FILES=	bin/unlzx

do-extract:
	${MKDIR} ${WRKSRC}
	${GZCAT} ${DISTDIR}/${DISTFILES} > ${WRKSRC}/${DISTNAME}

do-build:
	${CC} ${CFLAGS} -o ${WRKSRC}/${PORTNAME} ${WRKSRC}/${PORTNAME}.c

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/${PORTNAME} ${PREFIX}/bin

.include <bsd.port.mk>
