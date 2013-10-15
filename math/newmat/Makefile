# Created by: ijliao
# $FreeBSD: math/newmat/Makefile 327746 2013-09-20 20:55:04Z bapt $

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

NO_STAGE=	yes
do-install:
	@${MKDIR} ${PREFIX}/include/${PORTNAME}
	${INSTALL_DATA} ${WRKSRC}/*.h ${PREFIX}/include/${PORTNAME}
	${INSTALL_DATA} ${WRKSRC}/libnewmat.a ${PREFIX}/lib

.include <bsd.port.mk>
