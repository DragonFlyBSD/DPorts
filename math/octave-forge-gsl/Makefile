# Created by: Stephen Montgomery-Smith <stephen@math.missouri.edu>
# $FreeBSD: math/octave-forge-gsl/Makefile 339533 2014-01-12 19:19:56Z stephen $

PORTNAME=	octave-forge-gsl
PORTVERSION=	1.0.8
PORTREVISION=	12
CATEGORIES=	math

MAINTAINER=	stephen@FreeBSD.org
COMMENT=	Octave-forge package ${OCTAVE_PKGNAME}

LICENSE=	GPLv2

LIB_DEPENDS=	gsl:${PORTSDIR}/math/gsl

GNU_CONFIGURE=	yes

post-patch:
	@${REINPLACE_CMD} s+/bin/bash+${LOCALBASE}/bin/bash+g ${WRKSRC}/src/config*

.include "${.CURDIR}/../../Mk/bsd.octave.mk"
.include <bsd.port.mk>
