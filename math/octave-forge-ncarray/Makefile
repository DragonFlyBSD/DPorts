# Created by: Stephen Montgomery-Smith <stephen@FreeBSD.org>
# $FreeBSD: math/octave-forge-ncarray/Makefile 322356 2013-07-05 20:59:44Z stephen $

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

.include "${.CURDIR}/../../Mk/bsd.octave.mk"

do-build:
	@${DO_NADA}

post-build:
	${RM} -f ${WRKSRC}/Makefile ${WRKSRC}/configure
	cd ${WRKDIR} && ${TAR} cfz ${DISTNAME}.tar.gz ${OCTSRC}

.include <bsd.port.mk>
