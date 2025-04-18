PORTNAME=	axom
DISTVERSIONPREFIX=	v
DISTVERSION=	0.6.1
PORTREVISION=	1
CATEGORIES=	science

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Infrastructure for development of multi-physics applications and tools

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/../LICENSE

BROKEN_armv7=	use of overloaded operator '[]' is ambiguous, see https://github.com/LLNL/axom/issues/743
BROKEN_i386=	use of overloaded operator '[]' is ambiguous, see https://github.com/LLNL/axom/issues/743
BROKEN_powerpc=	use of overloaded operator '[]' is ambiguous, see https://github.com/LLNL/axom/issues/743

LIB_DEPENDS=	libconduit.so:science/conduit \
		libhdf5.so:science/hdf5 \
		libsiloh5.so:science/silo \
		libsz.so:science/libaec
RUN_DEPENDS=	sparsehash>0:devel/sparsehash

USES=		cmake compiler:c++11-lang

USE_GITHUB=	yes
GH_ACCOUNT=	LLNL
GH_TUPLE=	LLNL:axom_data:b3d8e6f:axom_data/../data \
		LLNL:blt:ddd5a0c:blt/cmake/blt \
		LLNL:uberenv:a121a45:uberenv/scripts/uberenv

CMAKE_OFF=	AXOM_ENABLE_DOCS AXOM_ENABLE_EXAMPLES AXOM_ENABLE_TESTS FREEBSD_ENABLE_EXAMPLES
CMAKE_ON=	BUILD_SHARED_LIBS
CMAKE_ARGS=	-DCONDUIT_DIR=${LOCALBASE} \
		-DHDF5_DIR=${LOCALBASE}

LDFLAGS+=	-lexecinfo

WRKSRC_SUBDIR=	src

CONFLICTS_INSTALL=	libfmt # bundles and installs an incompatible libfmt version: https://github.com/LLNL/axom/issues/561, axom headers include fmt unnecessarily

post-install: # installs headers of a third party library sparsehash: https://github.com/LLNL/axom/issues/365
	@${RM} -r ${STAGEDIR}${PREFIX}/include/sparsehash

do-test:
	@cd ${BUILD_WRKSRC} && \
		${SETENV} ${CONFIGURE_ENV} ${CMAKE_BIN} ${CMAKE_ARGS} -DAXOM_ENABLE_TESTS:BOOL=ON ${CMAKE_SOURCE_PATH} && \
		${SETENV} ${MAKE_ENV} ${MAKE_CMD} ${MAKE_ARGS} ${ALL_TARGET} && \
		${SETENV} ${MAKE_ENV} ${MAKE_CMD} ${MAKE_ARGS} test

.include <bsd.port.mk>
