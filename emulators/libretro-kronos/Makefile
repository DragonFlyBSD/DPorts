PORTNAME=	libretro-kronos
PORTVERSION=	2.1.5.20210601
PORTREVISION=	1
CATEGORIES=	emulators games

MAINTAINER=	beyert@cs.ucr.edu
COMMENT=	Sega Saturn and ST-V emulator forked from uoYabause for libretro
WWW=		https://fcare.github.io

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/yabause/COPYING

# standalone version uses solely cmake, whereas the retroarch core uses both
# cmake and gmake
USES=		cmake:noninja compiler:c++11-lib gl gmake pkgconfig qt:5 sdl

USE_GITHUB=	yes
GH_ACCOUNT=	FCare
GH_PROJECT=	Kronos
GH_TAGNAME=	a39f95a

USE_GL=	gl glew glu

USE_LDCONFIG=	yes

USE_QT=	core opengl buildtools:build qmake:build

USE_SDL=	sdl2

CMAKE_SOURCE_PATH=	${WRKSRC}/yabause

MAKE_ARGS=	USE_RTHREADS=1

CFLAGS+=	-I${LOCALBASE}/include
CXXFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

PLIST_FILES=	lib/libretro/kronos_libretro.so

pre-build:
	cd ${CMAKE_SOURCE_PATH} && ${CMAKE_BIN} .
	cd ${WRKSRC}/yabause/src && ${MAKE} m68kmake

.include <bsd.port.pre.mk>

.if ${CHOSEN_COMPILER_TYPE} == clang
# clang13 runs out of memory
LLVM_VER=	12
BUILD_DEPENDS+=	clang++${LLVM_VER}:devel/llvm${LLVM_VER}
CC=	${LOCALBASE}/bin/clang${LLVM_VER}
CXX=	${LOCALBASE}/bin/clang++${LLVM_VER}
.endif

do-build:
	cd ${WRKSRC}/yabause/src/libretro && ${DO_MAKE_BUILD}

post-patch:
.if ${ARCH} != "x86_64"
	@${REINPLACE_CMD} -e "s/HAVE_SSE = 1/HAVE_SSE = 0/" \
		${WRKSRC}/yabause/src/libretro/Makefile
.endif

do-install:
	@${MKDIR} ${STAGEDIR}/${PREFIX}/lib/libretro;
	${INSTALL_LIB} ${WRKSRC}/yabause/src/libretro/kronos_libretro.so \
		${STAGEDIR}/${PREFIX}/lib/libretro;

.include <bsd.port.post.mk>
