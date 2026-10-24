PORTNAME=	grpcio
PORTVERSION=	1.84.0
PORTREVISION=	0
CATEGORIES=	devel python
MASTER_SITES=	PYPI
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	vanilla@FreeBSD.org
COMMENT=	HTTP/2-based RPC framework
WWW=		https://pypi.org/project/grpcio/

LICENSE=	APACHE20

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}protobuf>=3:devel/py-protobuf@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}six>1:devel/py-six@${PY_FLAVOR}
LIB_DEPENDS=	libcares.so:dns/c-ares

USES=		compiler:c++17-lang localbase:ldflags python ssl
USE_PYTHON=	autoplist cython distutils
MAKE_ENV+=	GRPC_PYTHON_BUILD_SYSTEM_CARES=true \
		GRPC_PYTHON_BUILD_SYSTEM_OPENSSL=true \
		GRPC_PYTHON_BUILD_SYSTEM_ZLIB=true
LDFLAGS+=	-lcares

USE_GCC_VERSION= ${GCC_DEFAULT}
MAKE_ENV+= GRPC_PYTHON_BUILD_EXT_COMPILER_JOBS=${MAKE_JOBS_NUMBER}
post-patch:
	@${RM} ${WRKSRC}/src/python/grpcio/grpc/_cython/cygrpc.cpp

post-install:
	${STRIP_CMD} ${STAGEDIR}${PYTHONPREFIX_SITELIBDIR}/grpc/_cython/cygrpc*.so
	${REINPLACE_CMD} -e 's|^.*so$$|${PYTHONPREFIX_SITELIBDIR}/grpc/_cython/cygrpc${PYTHON_SOABI}.so|' ${_PYTHONPKGLIST}

dfly-patch:
	${REINPLACE_CMD} -e 's|FreeBSD|DragonFly|' \
		${WRKSRC}/Makefile \
		${WRKSRC}/include/grpc/support/port_platform.h \
		${WRKSRC}/third_party/abseil-cpp/absl/debugging/internal/elf_mem_image.h \
		${WRKSRC}/third_party/abseil-cpp/absl/debugging/internal/vdso_support.cc \
		${WRKSRC}/third_party/abseil-cpp/absl/debugging/symbolize_elf.inc \
		${WRKSRC}/third_party/abseil-cpp/absl/base/config.h \
		${WRKSRC}/third_party/abseil-cpp/absl/base/internal/endian.h \
		${WRKSRC}/third_party/abseil-cpp/absl/base/internal/sysinfo.cc \
		${WRKSRC}/third_party/abseil-cpp/absl/base/internal/raw_logging.cc \
		${WRKSRC}/include/grpc/impl/codegen/port_platform.h \
		${WRKSRC}/third_party/zlib/contrib/minizip/ioapi.h

.include <bsd.port.mk>
