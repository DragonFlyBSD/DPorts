# New ports collection makefile for:	octave-forge-ncarray
# Date created:		20 July 2012
# Whom:			Stephen Montgomery-Smith <stephen@FreeBSD.org>
#
# $FreeBSD: ports/math/octave-forge-ncarray/Makefile,v 1.2 2012/11/17 05:59:24 svnexp Exp $
#

PORTNAME=	octave-forge-ncarray
PORTVERSION=	1.0.0
CATEGORIES=	math

MAINTAINER=	stephen@FreeBSD.org
COMMENT=	Octave-forge package ${OCTAVE_PKGNAME}

# OCTSRC is the name of the directory of the package.
# It is usually ${OCTAVE_PKGNAME} or ${DISTNAME}.
OCTSRC=		ncArray

WRKSRC=		${WRKDIR}/${OCTSRC}/src

RUN_DEPENDS+=	${TARBALLS_DIR}/octcdf.tar.gz:${PORTSDIR}/math/octave-forge-octcdf

.include <bsd.port.pre.mk>
.include "${PORTSDIR}/Mk/bsd.octave.mk"
do-build:
	@${DO_NADA}

post-build:
	${RM} -f ${WRKSRC}/Makefile ${WRKSRC}/configure
	cd ${WRKDIR} && ${TAR} cfz ${DISTNAME}.tar.gz ${OCTSRC}

.include <bsd.port.post.mk>
