PORTNAME=	grpcio-tools
DISTVERSION=	1.84.0
CATEGORIES=	devel python
MASTER_SITES=	PYPI
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	grpcio_tools-${PORTVERSION}

MAINTAINER=	vanilla@FreeBSD.org
COMMENT=	Protobuf code generator for gRPC
WWW=		https://pypi.org/project/grpcio-tools/

LICENSE=	BSD3CLAUSE

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}grpcio>1:devel/py-grpcio@${PY_FLAVOR}
LIB_DEPENDS=	libcares.so:dns/c-ares

USES=		compiler:c++17-lang localbase:ldflags python
USE_PYTHON=	autoplist distutils
CFLAGS+=	-DHAVE_PTHREAD=1
LDFLAGS+=	-lcares

post-install:
	${STRIP_CMD} ${STAGEDIR}${PYTHONPREFIX_SITELIBDIR}/grpc_tools/_protoc_compiler*.so

dfly-patch:
	${REINPLACE_CMD} -e 's|FreeBSD|DragonFly|' \
		${WRKSRC}/third_party/abseil-cpp/absl/debugging/internal/elf_mem_image.h \
		${WRKSRC}/third_party/abseil-cpp/absl/debugging/internal/vdso_support.cc \
		${WRKSRC}/third_party/abseil-cpp/absl/debugging/symbolize_elf.inc \
		${WRKSRC}/third_party/abseil-cpp/absl/base/config.h \
		${WRKSRC}/third_party/abseil-cpp/absl/base/internal/endian.h \
		${WRKSRC}/third_party/abseil-cpp/absl/base/internal/sysinfo.cc \
		${WRKSRC}/third_party/abseil-cpp/absl/base/internal/raw_logging.cc \
		${WRKSRC}/third_party/abseil-cpp/absl/time/internal/cctz/src/time_zone_format.cc

.include <bsd.port.mk>
