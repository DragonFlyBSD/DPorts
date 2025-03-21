PORTNAME=	x265
PORTVERSION=	3.5
PORTREVISION=	2
CATEGORIES=	multimedia
MASTER_SITES=	https://bitbucket.org/multicoreware/x265_git/get/${BB_TAG}.tar.gz?meow=/

PATCH_SITES=   https://bitbucket.org/multicoreware/x265_git/commits/8f18e3ad32684eee95e885e718655f93951128c3/raw/
PATCHFILES+=   x265-asm-warnings.patch:-p1

MAINTAINER=	ports@virtual-estates.net
COMMENT=	H.265/High Efficiency Video Coding (HEVC) format
WWW=		https://www.x265.org/

LICENSE=	GPLv2+
LICENSE_FILE=	${WRKSRC:H}/COPYING

USES=		cmake compiler:c++14-lang cpe pathfix dos2unix

CPE_VENDOR=	multicorewareinc

BB_TAG=		Release_${DISTVERSION}

OPTIONS_DEFINE=		DEBUG OPTIMIZED_FLAGS VMAF
OPTIONS_DEFAULT=	OPTIMIZED_FLAGS HI8P HI10P HI12P
OPTIONS_DEFINE_aarch64=	ASM
OPTIONS_DEFINE_x86_64=	ASM SVTHEVC
OPTIONS_DEFINE_i386=	ASM
OPTIONS_DEFINE_powerpc64=	ASM
OPTIONS_DEFINE_powerpc64le=	ASM
OPTIONS_DEFAULT_x86_64=	ASM
OPTIONS_DEFAULT_powerpc64le=	ASM

OPTIONS_MULTI=		PixelWidth
OPTIONS_MULTI_PixelWidth=HI8P HI10P HI12P

DOS2UNIX_FILES=		common/scaler.cpp
DEBUG_PREVENTS=		OPTIMIZED_FLAGS
DEBUG_PREVENTS_MSG=	Optimizations are incompatible with debugging code
DEBUG_CMAKE_ON=		-DCMAKE_ASM_NASM_FLAGS:STRING="-g -O0"
OPTIMIZED_FLAGS_VARS=	CFLAGS+=-O3
SVTHEVC_LIB_DEPENDS=	libSvtHevcEnc.so:multimedia/svt-hevc
SVTHEVC_CMAKE_BOOL=	ENABLE_SVT_HEVC
SVTHEVC_CMAKE_ON=	-DSVT_HEVC_INCLUDE_DIR:PATH="${LOCALBASE}/include/svt-hevc"
VMAF_LIB_DEPENDS=	libvmaf.so:multimedia/vmaf
VMAF_USES=		localbase:ldflags
VMAF_CMAKE_BOOL=	ENABLE_LIBVMAF
VMAF_CMAKE_ON=		-DVMAF_INCLUDE_DIR:PATH="${LOCALBASE}/include/libvmaf"

DEBUG_DESC=	Enable debugging
HI8P_DESC=	Enable 8-bit pixel-width (you, probably, want this)
HI10P_DESC=	Enable 10-bit pixels (may break on i386)
HI12P_DESC=	Enable 12-bit pixels (may break on i386)
OPTIMIZED_FLAGS_DESC=	Enable O3 optimization
SVTHEVC_DESC=	HEVC encoding via SVT-HEVC
VMAF_DESC=	Per frame and aggregate VMAF score

USE_LDCONFIG=	yes
CMAKE_ARGS=	-DENABLE_TESTS=on -DENABLE_HDR10_PLUS:BOOL=true -DGIT_ARCHETYPE=1
LDFLAGS_i386=	-Wl,-znotext
EXTRACT_AFTER_ARGS+=	--exclude compat --strip-components=1
PATCH_WRKSRC=	${WRKSRC:H}
WRKSRC=		${WRKDIR}/source

.include <bsd.port.options.mk>

.if ${ARCH} == aarch64 && ${PORT_OPTIONS:MASM}
BUILD_DEPENDS=	as:devel/binutils
USE_GCC=	yes
.endif

.if ${ARCH:Mpowerpc64*} && ${PORT_OPTIONS:MASM}
CMAKE_ARGS+=	-DCPU_POWER8=ON \
		-DENABLE_ALTIVEC=ON
.endif

.if ${ARCH} != aarch64 && !${ARCH:Mpowerpc64*} && ${PORT_OPTIONS:MASM}
BUILD_DEPENDS=	nasm:devel/nasm
.endif

DEFAULT_DEPTH=	${PORT_OPTIONS:MHI*P:O:ts/:T}
OTHER_DEPTHS=	${PORT_OPTIONS:MHI*P:N${DEFAULT_DEPTH}}

.if "${DEFAULT_DEPTH}" == "HI12P"
CMAKE_ARGS+=	-DMAIN12:BOOL=true
.endif

.if "${DEFAULT_DEPTH}" != "HI8P"
CMAKE_ARGS+=	-DHIGH_BIT_DEPTH:BOOL=true
.endif

CMAKE_OTHER_ARGS=${CMAKE_ARGS:C/.*-D_END_CUSTOM_OPTIONS=1 +//W}

.if ${PORT_OPTIONS:MDEBUG}
CFLAGS:=	${CFLAGS:N-O*} -O0 -g
.endif

.for b in ${OTHER_DEPTHS:C/HI([0-9]+)P/\1/}
EXTRA_LINK_FLAGS+=-L${WRKSRC:H}/$bbit

.if ${ARCH:Mpowerpc64*}

.if $b != 8 || ! ${PORT_OPTIONS:MASM}
ASSEMBLY=false
.else
ASSEMBLY=true
.endif

.if ${PORT_OPTIONS:MASM}
POWER8=	true
.else
POWER8=	false
.endif

pre-build::
	@${ECHO_MSG} "---> Building the $b-bit library ---"
	${MKDIR} ${WRKSRC:H}/$bbit
	${CMAKE_BIN} -S ${WRKSRC} -B ${WRKSRC:H}/$bbit \
		${CMAKE_OTHER_ARGS} ${b:C/1./-DHIGH_BIT_DEPTH:BOOL=true/} \
		-DMAIN$b:BOOL=true -DENABLE_ALTIVEC=${ASSEMBLY} -DCPU_POWER8=${POWER8} \
		-DEXPORT_C_API:BOOL=false -DENABLE_CLI=false
	${SETENV} ${MAKE_ENV} ${MAKE_CMD} -C ${WRKSRC:H}/$bbit ${MAKE_ARGS}
	${LN} -f ${WRKSRC:H}/$bbit/libx265.a ${WRKSRC:H}/$bbit/libx265_$bbit.a
	${ECHO_MSG} "---> Built the $b-bit library ---"

.else
.if ${ARCH} == i386 && $b != 8 || ! ${PORT_OPTIONS:MASM}
ASSEMBLY=false
.else
ASSEMBLY=true
.endif

pre-build::
	@${ECHO_MSG} "---> Building the $b-bit library ---"
	${MKDIR} ${WRKSRC:H}/$bbit
	${CMAKE_BIN} -S ${WRKSRC} -B ${WRKSRC:H}/$bbit \
		${CMAKE_OTHER_ARGS} ${b:C/1./-DHIGH_BIT_DEPTH:BOOL=true/} \
		-DMAIN$b:BOOL=true -DENABLE_ASSEMBLY:BOOL=${ASSEMBLY} \
		-DEXPORT_C_API:BOOL=false -DENABLE_CLI=false
	${SETENV} ${MAKE_ENV} ${MAKE_CMD} -C ${WRKSRC:H}/$bbit ${MAKE_ARGS}
	${LN} -f ${WRKSRC:H}/$bbit/libx265.a ${WRKSRC:H}/$bbit/libx265_$bbit.a
	${ECHO_MSG} "---> Built the $b-bit library ---"
.endif
.endfor

.if "${EXTRA_LINK_FLAGS}"
CMAKE_ARGS+=	-DEXTRA_LINK_FLAGS:STRING="${EXTRA_LINK_FLAGS}"
CMAKE_ARGS+=	-DEXTRA_LIB="${OTHER_DEPTHS:C/HI([0-9]+)P/x265_\1bit/:C/ /;/gW}"
CMAKE_ARGS+=	${OTHER_DEPTHS:C/HI([0-9]+)P/-DLINKED_\1BIT:BOOL=true/}
.endif

CMAKE_ARGS+=	-DENABLE_SHARED:BOOL=true

.if ${ARCH} == i386 && ${DEFAULT_DEPTH} != "HI8P" || ! ${PORT_OPTIONS:MASM}
CMAKE_ARGS+=	-DENABLE_ASSEMBLY:BOOL=false
.else
.if !${ARCH:Mpowerpc64*}
CMAKE_ARGS+=	-DENABLE_ASSEMBLY:BOOL=true
.else
CMAKE_ARGS+=	-DCPU_POWER8=ON \
		-DENABLE_ALTIVEC=ON
.endif

do-test:
	${WRKDIR}/.build/test/TestBench
.endif

CMAKE_ARGS+=	-D_END_CUSTOM_OPTIONS=1
CMAKE_ARGS+=	-DENABLE_PIC:BOOL=true

.include <bsd.port.mk>
