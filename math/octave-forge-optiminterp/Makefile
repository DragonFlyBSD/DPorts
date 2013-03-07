# Created by: Stephen Montgomery-Smith <stephen@math.missouri.edu>
# $FreeBSD: ports/math/octave-forge-optiminterp/Makefile,v 1.17 2013/02/22 02:43:59 svnexp Exp $

PORTNAME=	octave-forge-optiminterp
PORTVERSION=	0.3.4
CATEGORIES=	math

MAINTAINER=	stephen@FreeBSD.org
COMMENT=	Octave-forge package ${OCTAVE_PKGNAME}

# OCTSRC is the name of the directory of the package.
# It is usually ${OCTAVE_PKGNAME} or ${DISTNAME}.
OCTSRC=		${OCTAVE_PKGNAME}

WRKSRC=		${WRKDIR}/${OCTSRC}/src

.include <bsd.port.pre.mk>
.include "${PORTSDIR}/Mk/bsd.octave.mk"

MAKE_ENV+=	MKOCTFILE_FORTRAN_90=yes MKOCTFILE=mkoctfile

post-build:
	${RM} -f ${WRKSRC}/Makefile ${WRKSRC}/configure
	cd ${WRKDIR} && ${TAR} cfz ${DISTNAME}.tar.gz ${OCTSRC}

.include <bsd.port.post.mk>
