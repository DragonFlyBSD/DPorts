# Created by: Koop Mast <kwm@FreeBSD.org>
# $FreeBSD$

PORTNAME?=	libcxx
PORTVERSION=	16.0.6
DISTNAME=	llvm-project-${PORTVERSION}.src
CATEGORIES=	devel
MASTER_SITES=	http://releases.llvm.org/${PORTVERSION}/ \
		 https://github.com/llvm/llvm-project/releases/download/llvmorg-${PORTVERSION}/

MAINTAINER=	tuxillo@quantumachine.net
COMMENT?=	LLVM C++ standard library with c++11 support

USES=		tar:xz

LICENSE_GROUP=	MIT UIUC
LICENSE_NAME_UIUC=	University of Illinois/NCSA Open Source License
LICENSE_PERMS_UIUC=	dist-mirror dist-sell pkg-mirror pkg-sell auto-accept

USES+=		cmake compiler:c++11-lang
USE_LDCONFIG=	yes
LDFLAGS+=	-L${LOCALBASE}/lib

CXXRT_INCS=	${LOCALBASE}/include/cxxrt/
CXXRT_LIB=	${LOCALBASE}/lib/libcxxrt.so
LIB_DEPENDS+=	libcxxrt.so:devel/libcxxrt

PLIST_SUB+=	LLVM_DEFAULT=${LLVM_DEFAULT} \
		PORTNAME=${PORTNAME}

.include <bsd.port.options.mk>

# Force build with llvm
LLVM_DEFAULT=		16
USE_CLANG_FALLBACK=     16

USE_LDCONFIG=	${PREFIX}/llvm${LLVM_DEFAULT}/${PORTNAME}/lib

CMAKE_SOURCE_PATH=	${WRKSRC}/libcxx
CMAKE_INSTALL_PREFIX=	${PREFIX}/llvm${LLVM_DEFAULT}/${PORTNAME}

CMAKE_ARGS=	-DLIBCXX_CXX_ABI=libcxxrt -DLIBCXX_CXX_ABI_INCLUDE_PATHS=${CXXRT_INCS}
CMAKE_ARGS+=	-DLIBCXX_INCLUDE_BENCHMARKS=OFF

post-install:
	${LN} -sf c++/v1 ${STAGEDIR}${PREFIX}/llvm${LLVM_DEFAULT}/${PORTNAME}/include/c++/v1/tr1
	${RM} ${STAGEDIR}${PREFIX}/llvm${LLVM_DEFAULT}/${PORTNAME}/lib/libc++.so
	@${MKDIR} ${STAGEDIR}${PREFIX}/llvm${LLVM_DEFAULT}/${PORTNAME}/lib/c++/
	${ECHO} 'GROUP ( ${PREFIX}/llvm${LLVM_DEFAULT}/${PORTNAME}/lib/libc++.so.1 ${CXXRT_LIB} ${EXTRALIB})' > ${STAGEDIR}${PREFIX}/llvm${LLVM_DEFAULT}/${PORTNAME}/lib/libc++.so
	${ECHO} 'GROUP ( ${PREFIX}/llvm${LLVM_DEFAULT}/${PORTNAME}/lib/libc++.so.1 ${CXXRT_LIB} ${EXTRALIB})' > ${STAGEDIR}${PREFIX}/llvm${LLVM_DEFAULT}/${PORTNAME}/lib/c++/libstdc++.so

.include <bsd.port.mk>
