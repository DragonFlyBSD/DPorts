# $FreeBSD$

PORTNAME=	libcxxrt
PORTVERSION=	20180311
CATEGORIES=	devel

MAINTAINER=	mmokhi@FreeBSD.org
COMMENT=	Implementation of the Code Sourcery C++ ABI

LICENSE=	BSD2CLAUSE

USES=		cmake:insource compiler:c++11-lang

USE_GITHUB=	yes
GH_ACCOUNT=	libcxxrt
GH_TAGNAME=	f96846e

USE_LDCONFIG=	yes
CXXFLAGS+=	-nostdlib

do-install:
	${INSTALL_LIB} ${WRKSRC}/lib/libcxxrt.so ${STAGEDIR}${PREFIX}/lib
	${INSTALL_DATA} ${WRKSRC}/lib/libcxxrt.a ${STAGEDIR}${PREFIX}/lib
	@${MKDIR} ${STAGEDIR}${PREFIX}/include/cxxrt
	${INSTALL_DATA} ${WRKSRC}/src/*.h ${STAGEDIR}${PREFIX}/include/cxxrt

.include <bsd.port.mk>
