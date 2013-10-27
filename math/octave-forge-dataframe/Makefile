# Created by: Stephen Montgomery-Smith <stephen@missouri.edu>
# $FreeBSD: math/octave-forge-dataframe/Makefile 331644 2013-10-26 00:52:33Z gerald $

PORTNAME=	octave-forge-dataframe
PORTVERSION=	0.9.1
PORTREVISION=	3
CATEGORIES=	math

MAINTAINER=	stephen@FreeBSD.org
COMMENT=	Octave-forge package ${OCTAVE_PKGNAME}

# OCTSRC is the name of the directory of the package.
# It is usually ${OCTAVE_PKGNAME} or ${DISTNAME}.
OCTSRC=		${OCTAVE_PKGNAME}

NO_STAGE=	yes
.include "${.CURDIR}/../../Mk/bsd.octave.mk"

do-build:
	@${DO_NADA}

post-build:
	${RM} -f ${WRKSRC}/Makefile ${WRKSRC}/configure
	cd ${WRKDIR} && ${TAR} cfz ${DISTNAME}.tar.gz ${OCTSRC}

.include <bsd.port.mk>
