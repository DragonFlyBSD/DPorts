# Created by: ijliao
# $FreeBSD: math/newmat/Makefile 340722 2014-01-22 17:00:46Z mat $

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
