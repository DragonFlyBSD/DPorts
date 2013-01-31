# Created by: Stephen Montgomery-Smith <stephen@math.missouri.edu>
# $FreeBSD: ports/math/octave-forge-image/Makefile,v 1.20 2012/11/17 05:59:24 svnexp Exp $

PORTNAME=	octave-forge-image
PORTVERSION=	2.0.0
CATEGORIES=	math

MAINTAINER=	stephen@FreeBSD.org
COMMENT=	Octave-forge package ${OCTAVE_PKGNAME}

# OCTSRC is the name of the directory of the package.
# It is usually ${OCTAVE_PKGNAME} or ${DISTNAME}.
OCTSRC=		${OCTAVE_PKGNAME}

WRKSRC=		${WRKDIR}/${OCTSRC}/src

RUN_DEPENDS+=	${TARBALLS_DIR}/signal.tar.gz:${PORTSDIR}/math/octave-forge-signal

.include <bsd.port.pre.mk>
.include "${PORTSDIR}/Mk/bsd.octave.mk"
post-patch:
	${REINPLACE_CMD} s/-Wall// ${WRKSRC}/Makefile

post-build:
	${RM} -f ${WRKSRC}/Makefile ${WRKSRC}/configure
	cd ${WRKDIR} && ${TAR} cfz ${DISTNAME}.tar.gz ${OCTSRC}

.include <bsd.port.post.mk>
