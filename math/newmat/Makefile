# ex:ts=8
# New ports collection makefile for:	newmat
# Date created:			Dec 6, 2001
# Whom:				ijliao
#
# $FreeBSD: ports/math/newmat/Makefile,v 1.18 2012/11/17 05:59:23 svnexp Exp $
#

PORTNAME=	newmat
PORTVERSION=	1.1
PORTREVISION=	1
CATEGORIES=	math
MASTER_SITES=	http://www.robertnz.net/ftp/
DISTNAME=	${PORTNAME}${PORTVERSION:S/.//}

MAINTAINER=	gahr@FreeBSD.org
COMMENT=	A C++ matrix library

NO_WRKSUBDIR=	yes
USE_GMAKE=	yes
MAKEFILE=	nm_gnu.mak
MAKE_ARGS=	CXX="${CXX}" CXXFLAGS="${CXXFLAGS}"
ALL_TARGET=	everything

do-install:
	@${MKDIR} ${PREFIX}/include/${PORTNAME}
	${INSTALL_DATA} ${WRKSRC}/*.h ${PREFIX}/include/${PORTNAME}
	${INSTALL_DATA} ${WRKSRC}/libnewmat.a ${PREFIX}/lib

.include <bsd.port.mk>
