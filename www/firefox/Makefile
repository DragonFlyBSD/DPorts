PORTNAME=	firefox
DISTVERSION=	159.0.1
PORTEPOCH=	2
CATEGORIES=	www wayland
MASTER_SITES=	MOZILLA/${PORTNAME}/releases/${DISTVERSION}${DISTVERSIONSUFFIX}/source \
		MOZILLA/${PORTNAME}/candidates/${DISTVERSION}${DISTVERSIONSUFFIX}-candidates/build1/source
DISTFILES=	${DISTNAME}.source${EXTRACT_SUFX}

MAINTAINER=	gecko@FreeBSD.org
COMMENT=	Web browser based on the browser portion of Mozilla
WWW=		https://www.firefox.com/

NOT_FOR_ARCHS=		i386
NOT_FOR_ARCHS_REASON=	fails to build: rust needs more address space than platform can provide

BUILD_DEPENDS=	nspr>=4.32:devel/nspr \
		nss>=3.131:security/nss \
		libevent>=2.1.8:devel/libevent \
		png>=1.6.45:graphics/png \
		dav1d>=1.0.0:multimedia/dav1d \
		libvpx>=1.15.0:multimedia/libvpx \
		${PYTHON_PKGNAMEPREFIX}sqlite3>0:databases/py-sqlite3@${PY_FLAVOR} \
		v4l_compat>0:multimedia/v4l_compat \
		nasm:devel/nasm \
		yasm:devel/yasm \
		zip:archivers/zip \
		${LOCALBASE}/share/wasi-sysroot/lib/wasm32-wasip1/libc++abi.a:devel/wasi-libcxx${LLVM_VERSION} \
		${LOCALBASE}/share/wasi-sysroot/lib/wasm32-wasip1/libc.a:devel/wasi-libc@${LLVM_VERSION} \
		wasi-compiler-rt${LLVM_VERSION}>0:devel/wasi-compiler-rt${LLVM_VERSION}

USE_GECKO=	gecko
CONFLICTS_INSTALL=	firefox-esr
USE_MOZILLA=	-sqlite

USES=		tar:xz
# helpful when testing beta
WRKSRC=		${WRKDIR}/${PORTNAME}-${DISTVERSION}

FIREFOX_ICON=		${MOZILLA}.png
FIREFOX_ICON_SRC=	${PREFIX}/lib/${MOZILLA}/browser/chrome/icons/default/default48.png
MOZ_OPTIONS=	--enable-application=browser \
		--enable-official-branding \
		--with-wasi-sysroot=${LOCALBASE}/share/wasi-sysroot

MOZ_OPTIONS+= --disable-webrtc
MOZ_OPTIONS+= --without-wasm-sandboxed-libraries
MOZ_OPTIONS+= --with-libclang-path=${LLVM_PREFIX}/lib
CXXFLAGS= -Wno-multistatement-macros -Wno-class-memaccess -stdlib=libc++ -cxx-isystem ${LLVM_PREFIX}/include/c++/v1
BUILD_DEPENDS+= ${LOCALBASE}/llvm${LLVM_VERSION}/include/c++/v1/new:devel/libcxx${LLVM_VERSION}
LDFLAGS= -L${LLVM_PREFIX}/lib -Wl,-rpath,/usr/lib/${DFLY_BASE_CCVER}
LIB_DEPENDS= libc++.so.1:devel/libcxx${LLVM_VERSION}
CONFIGURE_ENV= BINDGEN_CFLAGS="-I${LOCALBASE}/include -stdlib=libc++ -cxx-isystem ${LLVM_PREFIX}/include/c++/v1"
BINARY_ALIAS= clang=${LOCALBASE}/llvm${LLVM_VERSION}/bin/clang clang++=${LOCALBASE}/llvm${LLVM_VERSION}/bin/clang++ wasm-ld=${LOCALBASE}/llvm${LLVM_VERSION}/bin/wasm-ld
CC= ${LLVM_PREFIX}/bin/clang
CXX= ${LLVM_PREFIX}/bin/clang++
CPP= ${LLVM_PREFIX}/bin/clang-cpp
.include "${.CURDIR}/../../www/firefox/Makefile.options"

post-extract:
	@${SED} -e 's|@FIREFOX_ICON@|${FIREFOX_ICON:R}|;s|@MOZILLA@|${MOZILLA}|' \
		<${FILESDIR}/firefox.desktop.in >${WRKDIR}/${MOZILLA_EXEC_NAME}.desktop

post-patch:
	@${REINPLACE_CMD} -e 's|%%LOCALBASE%%|${LOCALBASE}|g' \
		${WRKSRC}/browser/app/nsBrowserApp.cpp

post-install:
	${INSTALL_DATA} ${WRKDIR}/${MOZILLA_EXEC_NAME}.desktop ${STAGEDIR}${PREFIX}/share/applications
	${MKDIR} ${STAGEDIR}${PREFIX}/share/pixmaps
	${LN} -sf ${FIREFOX_ICON_SRC} ${STAGEDIR}${PREFIX}/share/pixmaps/${FIREFOX_ICON}

OPTIONS_DEFAULT:= ${OPTIONS_DEFAULT:NPULSEAUDIO}
OPTIONS_DEFAULT_x86_64:= ${OPTIONS_DEFAULT_x86_64:NLTO}
MOZ_OPTIONS:= ${MOZ_OPTIONS:N--with-wasi-sysroot*}
dfly-patch:
	# disable SCTP
	${REINPLACE_CMD} -e 's|MOZ_SCTP|MOZ_DISABLE_SCTP|' \
		${WRKSRC}/netwerk/moz.build
	# ANGLE moved: gfx/angle/checkout/src/... -> third_party/angle/src/...
	${REINPLACE_CMD} -e 's|<math.h>|<cmath>|' \
		${WRKSRC}/third_party/angle/src/compiler/translator/InfoSink.h \
		${WRKSRC}/third_party/angle/src/compiler/translator/IntermNode.cpp
	${REINPLACE_CMD} -e 's@_XOPEN_SOURCE@&___@g' \
		${WRKSRC}/media/libcubeb/src/cubeb_alsa.c
	${REINPLACE_CMD} -e 's@_POSIX_SOURCE@&___@g' \
		${WRKSRC}/media/libcubeb/src/cubeb_jack.cpp
	${REINPLACE_CMD} -e 's@gtk+-wayland@&z@g' \
		${WRKSRC}/toolkit/moz.configure

.include <bsd.port.mk>
