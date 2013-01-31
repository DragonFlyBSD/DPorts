# New ports collection makefile for:	octave-forge-fits
# Date created:		13 Janurary 2011
# Whom:			Stephen Montgomery-Smith <stephen@math.missouri.edu>
#
# $FreeBSD: ports/math/octave-forge-fits/Makefile,v 1.12 2012/11/17 05:59:24 svnexp Exp $
#

PORTNAME=	octave-forge-fits
PORTVERSION=	1.0.2
CATEGORIES=	math

MAINTAINER=	stephen@FreeBSD.org
COMMENT=	Octave-forge package ${OCTAVE_PKGNAME}

# OCTSRC is the name of the directory of the package.
# It is usually ${OCTAVE_PKGNAME} or ${DISTNAME}.
OCTSRC=		${DISTNAME}

WRKSRC=	${WRKDIR}/${OCTSRC}/src

LIB_DEPENDS+=	cfitsio:${PORTSDIR}/astro/cfitsio

.include <bsd.port.pre.mk>
.include "${PORTSDIR}/Mk/bsd.octave.mk"
post-build:
	${RM} -f ${WRKSRC}/Makefile ${WRKSRC}/configure
	cd ${WRKDIR} && ${TAR} cfz ${DISTNAME}.tar.gz ${OCTSRC}

.include <bsd.port.post.mk>
