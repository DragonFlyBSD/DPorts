# New ports collection makefile for:	calibrator
# Date created:				13 October 2003
# Whom:					bms@FreeBSD.org
#
# $FreeBSD: ports/devel/calibrator/Makefile,v 1.4 2012/11/17 05:55:36 svnexp Exp $
#

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

do-extract:
	${MKDIR} ${WRKSRC}
	${CP} ${DISTDIR}/${DISTNAME} ${WRKSRC}

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/${PORTNAME} ${PREFIX}/bin

.include <bsd.port.mk>
