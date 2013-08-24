# Created by: Stephen Montgomery-Smith <stephen@math.missouri.edu>
# $FreeBSD: math/octave-forge-statistics/Makefile 324819 2013-08-16 22:40:22Z stephen $

PORTNAME=	octave-forge-statistics
PORTVERSION=	1.2.2
CATEGORIES=	math

MAINTAINER=	stephen@FreeBSD.org
COMMENT=	Octave-forge package ${OCTAVE_PKGNAME}

# OCTSRC is the name of the directory of the package.
# It is usually ${OCTAVE_PKGNAME} or ${DISTNAME}.
OCTSRC=		${OCTAVE_PKGNAME}

RUN_DEPENDS+=	${TARBALLS_DIR}/io.tar.gz:${PORTSDIR}/math/octave-forge-io

.include "${.CURDIR}/../../Mk/bsd.octave.mk"

do-build:
	@${DO_NADA}

post-build:
	${RM} -f ${WRKSRC}/Makefile ${WRKSRC}/configure
	cd ${WRKDIR} && ${TAR} cfz ${DISTNAME}.tar.gz ${OCTSRC}

.include <bsd.port.mk>
