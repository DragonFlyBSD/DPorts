# New ports collection makefile for:	octave-forge-struct
# Date created:		8 September 2008
# Whom:			Stephen Montgomery-Smith <stephen@math.missouri.edu>
#
# $FreeBSD: ports/math/octave-forge-struct/Makefile,v 1.18 2012/11/17 05:59:25 svnexp Exp $
#

PORTNAME=	octave-forge-struct
PORTVERSION=	1.0.10
PORTREVISION=	1
CATEGORIES=	math

MAINTAINER=	stephen@FreeBSD.org
COMMENT=	Octave-forge package ${OCTAVE_PKGNAME}

# OCTSRC is the name of the directory of the package.
# It is usually ${OCTAVE_PKGNAME} or ${DISTNAME}.
OCTSRC=		${DISTNAME}

WRKSRC=		${WRKDIR}/${OCTSRC}/src

.include <bsd.port.pre.mk>
.include "${PORTSDIR}/Mk/bsd.octave.mk"
post-build:
	${RM} -f ${WRKSRC}/Makefile ${WRKSRC}/configure
	cd ${WRKDIR} && ${TAR} cfz ${DISTNAME}.tar.gz ${OCTSRC}

.include <bsd.port.post.mk>
