PORTNAME=	gkl
DISTVERSION=	0.9.1
PORTREVISION=	3
CATEGORIES=	biology devel

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Accelerated kernel library for genomics
WWW=		https://github.com/Intel-HLS/GKL

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

BROKEN_aarch64=	/usr/lib/clang/19/include/ia32intrin.h:312:10: error: use of undeclared identifier '__builtin_ia32_readeflags_u32'

BUILD_DEPENDS=	gmake:devel/gmake
LIB_DEPENDS=	libisal.so:devel/isa-l

USES=		cmake:noninja java localbase:ldflags
USE_LDCONFIG=	yes

USE_GITHUB=	yes
GH_ACCOUNT=	Intel-HLS
GH_PROJECT=	GKL
JAVA_VERSION=	8 11

BINARY_ALIAS=	make=${GMAKE}

dfly-patch:
	${REINPLACE_CMD} -e 's/^#ifdef __FreeBSD__$$/#if defined(__FreeBSD__) || defined(__DragonFly__)/' \
		${WRKSRC}/src/main/native/pairhmm/IntelPairHmm.cc \
		${WRKSRC}/src/main/native/pdhmm/pdhmm.h \
		${WRKSRC}/src/main/native/utils/utils.cc
	${REINPLACE_CMD} -e 's/^#if defined(__linux__) || defined(__FreeBSD__)$$/& || defined(__DragonFly__)/' \
		${WRKSRC}/src/main/native/pdhmm/pdhmm-implementation.h \
		${WRKSRC}/src/main/native/pdhmm/pdhmm-serial.cc
	${REINPLACE_CMD} -e 's/"-static-libstdc++ -static-libgcc -Wl,-z,now"/"-Wl,-z,now"/' \
		${WRKSRC}/CMakeLists.txt

.include <bsd.port.mk>
