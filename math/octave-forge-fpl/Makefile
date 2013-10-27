# Created by: Stephen Montgomery-Smith <stephen@math.missouri.edu>
# $FreeBSD: math/octave-forge-fpl/Makefile 331644 2013-10-26 00:52:33Z gerald $

PORTNAME=	octave-forge-fpl
PORTVERSION=	1.3.4
PORTREVISION=	1
CATEGORIES=	math

MAINTAINER=	stephen@FreeBSD.org
COMMENT=	Octave-forge package ${OCTAVE_PKGNAME}

# OCTSRC is the name of the directory of the package.
# It is usually ${OCTAVE_PKGNAME} or ${DISTNAME}.
OCTSRC=		${OCTAVE_PKGNAME}

RUN_DEPENDS+=	dx:${PORTSDIR}/graphics/opendx

NO_STAGE=	yes
.include "${.CURDIR}/../../Mk/bsd.octave.mk"

do-build:
	@${DO_NADA}

post-build:
	cd ${WRKDIR} && ${TAR} cfz ${DISTNAME}.tar.gz ${OCTSRC}

.include <bsd.port.mk>
