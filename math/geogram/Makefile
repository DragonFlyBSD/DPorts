PORTNAME=	geogram
DISTVERSIONPREFIX=	v
DISTVERSION=	1.9.0
CATEGORIES=	math

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Programming library of geometric algorithms
WWW=		https://github.com/BrunoLevy/geogram # was: https://github.com/alicevision/geogram

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/doc/devkit/license.dox

ONLY_FOR_ARCHS=	amd64 i386
ONLY_FOR_ARCHS_REASON=	use of inline assembly for these architectures only, at least in src/lib/geogram/basic/atomics.h

LIB_DEPENDS=	libglfw.so:graphics/glfw

USES=		cmake gl localbase:ldflags xorg
USE_XORG=	x11 xcursor xi xinerama xrandr xxf86vm
USE_GL=		gl glu
USE_LDCONFIG=	yes

USE_GITHUB=	yes
GH_ACCOUNT=	BrunoLevy
GH_TUPLE=	ddemidov:amgcl:a705f0822a332e215c41bccbeb6a7d92e90c49f2:ddemidov_amgcl/src/lib/geogram/third_party/amgcl \
		glfw:glfw:b35641f4a3c62aa86a0b3c983d163bc0fe36026d:glfw_glfw/src/lib/third_party/glfw \
		ocornut:imgui:6d948ab47ecf984239af01434f3ed03808dbf188:ocornut_imgui/src/lib/geogram_gfx/third_party/imgui \
		LoicMarechal:libMeshb:e3678731ef14497c720ee7017a14450eba2602d2:LoicMarechal_libMeshb/src/lib/geogram/third_party/libMeshb \
		diegonehab:rply:4296cc91b5c8c26d4e7d7aac0cee2b194ffc5800:diegonehab_rply/src/lib/geogram/third_party/rply

CMAKE_ON=	GEOGRAM_USE_SYSTEM_GLFW3 VORPALINE_BUILD_DYNAMIC
CMAKE_ARGS=	-DVORPALINE_PLATFORM:STRING=FreeBSD

LDFLAGS+=	-pthread \
		-lexecinfo

post-install:
	# delete empty folders, see https://github.com/BrunoLevy/geogram/issues/185
	@${FIND} ${STAGEDIR}${PREFIX} -type d -empty -delete

# unclear how to run tests, see https://github.com/BrunoLevy/geogram/issues/186

CMAKE_ARGS:= ${CMAKE_ARGS:N-DVORPALINE_PLATFORM*} -DVORPALINE_PLATFORM:STRING=DragonFly
dfly-patch:
	${MKDIR} ${WRKSRC}/cmake/platforms/DragonFly
	${CP} -v ${WRKSRC}/cmake/platforms/FreeBSD-clang.cmake \
		${WRKSRC}/cmake/platforms/DragonFly-gcc.cmake
	${REINPLACE_CMD} -e 's@-Qunused-arguments@@g' -e 's@-Weverything@@g' \
		${WRKSRC}/cmake/platforms/DragonFly-gcc.cmake
	${CP} -v ${WRKSRC}/cmake/platforms/FreeBSD.cmake \
		${WRKSRC}/cmake/platforms/DragonFly.cmake
	${CP} -v ${WRKSRC}/cmake/platforms/FreeBSD/config.cmake \
		${WRKSRC}/cmake/platforms/DragonFly/config.cmake
	${REINPLACE_CMD} -e s@FreeBSD-clang@DragonFly-gcc@g \
		${WRKSRC}/cmake/platforms/DragonFly/config.cmake
	${CP} -v ${WRKSRC}/cmake/platforms/FreeBSD/setvars.sh \
		${WRKSRC}/cmake/platforms/DragonFly/setvars.sh
	${REINPLACE_CMD} -e 's@clang\+\+@g++@g' -e 's@clang@gcc@g' \
		${WRKSRC}/cmake/platforms/DragonFly/setvars.sh
	${REINPLACE_CMD} -e 's@FreeBSD@DragonFly@g' \
		${WRKSRC}/src/lib/geogram/NL/nl_private.h
	${REINPLACE_CMD} -e 's@FreeBSD@DragonFly@g' -e 's@FREEBSD@DRAGONFLY@g' \
		${WRKSRC}/src/lib/geogram/basic/algorithm.h \
		${WRKSRC}/src/lib/geogram/basic/common.h \
		${WRKSRC}/src/lib/geogram/basic/command_line.cpp \
		${WRKSRC}/src/lib/geogram/lua/lua_io.cpp \
		${WRKSRC}/src/lib/third_party/numerics/LIBF2C/sysdep1.h

.include <bsd.port.mk>
