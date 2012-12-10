# Ports collection makefile for:	tnt
# Date created:				Mar 15, 2003
# Whom:					Pedro F. Giffuni <giffunip@asme.org>
#
# $FreeBSD: ports/devel/tnt/Makefile,v 1.9 2012/11/17 05:57:05 svnexp Exp $
#

PORTNAME=	tnt
PORTVERSION=	1.2.6
CATEGORIES=	devel math
MASTER_SITES=	http://math.nist.gov/tnt/
DISTNAME=	${PORTNAME}_126
.ifndef NOPORTDOCS
DISTFILES=${DISTNAME}${EXTRACT_SUFX} tnt120doc.zip
.endif
DIST_SUBDIR=	tnt
EXTRACT_ONLY=	${DISTNAME}${EXTRACT_SUFX}

MAINTAINER=	erik@bz.bzflag.bz
COMMENT=	Template Numerical Toolkit

BUILD_DEPENDS=	unzip:${PORTSDIR}/archivers/unzip

USE_ZIP=	yes
NO_BUILD=	yes

.ifndef NOPORTDOCS
PORTDOCS=	*
.endif

do-install:
	${MKDIR} ${PREFIX}/include/tnt
	${INSTALL_DATA} ${WRKDIR}/*.h ${PREFIX}/include/tnt
.ifndef NOPORTDOCS
	${MKDIR} ${DOCSDIR}
	${EXTRACT_CMD} ${DISTDIR}/${DIST_SUBDIR}/tnt120doc \
		-d ${DOCSDIR}
.endif

.include <bsd.port.mk>
