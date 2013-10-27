# Created by: Stephen Montgomery-Smith <stephen@math.missouri.edu>
# $FreeBSD: math/octave-forge-nan/Makefile 331644 2013-10-26 00:52:33Z gerald $

PORTNAME=	octave-forge-nan
PORTVERSION=	2.5.5
PORTREVISION=	2
CATEGORIES=	math

MAINTAINER=	stephen@FreeBSD.org
COMMENT=	Octave-forge package ${OCTAVE_PKGNAME}

# OCTSRC is the name of the directory of the package.
# It is usually ${OCTAVE_PKGNAME} or ${DISTNAME}.
OCTSRC=		NaN

WRKSRC=		${WRKDIR}/${OCTSRC}/src

NO_STAGE=	yes
.include "${.CURDIR}/../../Mk/bsd.octave.mk"

ALL_TARGET=	octave

post-build:
	${RM} -f ${WRKSRC}/Makefile ${WRKSRC}/configure
	cd ${WRKDIR} && ${TAR} cfz ${DISTNAME}.tar.gz ${OCTSRC}

.include <bsd.port.mk>
