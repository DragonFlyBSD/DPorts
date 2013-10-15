# Created by: bms@FreeBSD.org
# $FreeBSD: devel/calibrator/Makefile 327722 2013-09-20 17:03:26Z bapt $

PORTNAME=		calibrator
PORTVERSION=		0.9
CATEGORIES=		devel
MASTER_SITES=		http://homepages.cwi.nl/~manegold/Calibrator/src/
DISTNAME=		${PORTNAME}.c
EXTRACT_SUFX=

MAINTAINER=		ports@FreeBSD.org
COMMENT=		Cache Profiling Tool

NO_WRKSUBDIR=		yes
PLIST_FILES=		bin/calibrator

NO_STAGE=	yes
do-extract:
	${MKDIR} ${WRKSRC}
	${CP} ${DISTDIR}/${DISTNAME} ${WRKSRC}

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/${PORTNAME} ${PREFIX}/bin

.include <bsd.port.mk>
