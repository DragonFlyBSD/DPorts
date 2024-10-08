PORTNAME=	fcl
DISTVERSION=	0.7.0
PORTREVISION=	1
CATEGORIES=	math

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Flexible Collision Library
WWW=		https://github.com/flexible-collision-library/fcl

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

LIB_DEPENDS=	libccd.so:math/libccd

USES=		cmake compiler:c++11-lang eigen:3
USE_GITHUB=	yes
GH_ACCOUNT=	flexible-collision-library
USE_LDCONFIG=	yes

CMAKE_ON=	FREEBSD_ENABLE_SSE
CMAKE_OFF=	FCL_BUILD_TESTS BUILD_TESTING # also see https://github.com/flexible-collision-library/fcl/issues/354

OPTIONS_DEFINE_x86_64=		SSE2 SSE3 SSSE3 SSE4 SSE41 SSE42 SSE4A
OPTIONS_DEFAULT_x86_64=		SSE2
OPTIONS_DEFINE_i386=		${OPTIONS_DEFINE_x86_64}
OPTIONS_DEFAULT_i386=		${OPTIONS_DEFAULT_x86_64}

.for sse in ${OPTIONS_DEFINE_x86_64}
${sse}_DESC=		Support for ${sse}
${sse}_CMAKE_ON=	-DFCL_USE_X64_SSE:BOOL=ON -DOPT_SSE_${sse}=-m${sse:tl:S/41/4.1/:S/42/4.2/}
.endfor

do-test: # tests fail to compile: https://github.com/flexible-collision-library/fcl/issues/549
	@cd ${BUILD_WRKSRC} && \
		${SETENV} ${CONFIGURE_ENV} ${CMAKE_BIN} ${CMAKE_ARGS} -DBUILD_TESTING:BOOL=ON -DFCL_BUILD_TESTS:BOOL=ON ${CMAKE_SOURCE_PATH} && \
		${SETENV} ${MAKE_ENV} ${MAKE_CMD} ${MAKE_ARGS} ${ALL_TARGET} && \
		${SETENV} ${MAKE_ENV} ${MAKE_CMD} ${MAKE_ARGS} test

.include <bsd.port.mk>
