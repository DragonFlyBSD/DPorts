PORTNAME=	libobjc2
DISTVERSIONPREFIX=v
DISTVERSION=	2.3
CATEGORIES=	lang devel gnustep

MAINTAINER=	pkubaj@FreeBSD.org
COMMENT=	Replacement Objective-C runtime supporting modern Objective-C features

LICENSE=	MIT

BUILD_DEPENDS=	${LOCALBASE}/include/tsl/robin_map.h:devel/robin-map

USES=		cmake:testing compiler objc:compiler

USE_GITHUB=	yes
GH_ACCOUNT=	gnustep

USE_LDCONFIG=	yes

LDFLAGS+= -lm -L /lib -L${LOCALBASE}/llvm${LLVM_DEFAULT}/lib/c++ -L /usr/lib -lpthread

CMAKE_ARGS+=	-DLIB_INSTALL_PATH=lib \
		-DLOCALBASE=${LOCALBASE}
CMAKE_TESTING_ON=	TESTS

LDFLAGS_armv7=	-Wl,-znotext
SSP_UNSAFE=	yes

PLIST_SUB+=	SHLIB_MAJOR=${SHLIB_MAJOR} SHLIB_MINOR=${SHLIB_MINOR}

SHLIB_MAJOR=	4
SHLIB_MINOR=	6

CXXFLAGS= -nostdlib++ -stdlib=libc++ -I${LOCALBASE}/include -cxx-isystem ${LOCALBASE}/llvm${LLVM_DEFAULT}/include/c++/v1
LIB_DIRS= ${PREFIX}/llvm${LLVM_DEFAULT}/lib
LIB_DEPENDS= libc++.so.1:devel/libcxx${LLVM_DEFAULT}
MAKE_ENV= LDVER=ld.bfd
post-install:
	${LN} -sf libobjc.so.${SHLIB_MAJOR}.${SHLIB_MINOR} ${STAGEDIR}${PREFIX}/lib/libobjc.so.${SHLIB_MAJOR}

.include <bsd.port.mk>
