# Created by: Stephen Montgomery-Smith <stephen@math.missouri.edu>
# $FreeBSD: math/octave-forge-fpl/Makefile 327746 2013-09-20 20:55:04Z bapt $

PORTNAME=	octave-forge-fpl
PORTVERSION=	1.3.4
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
