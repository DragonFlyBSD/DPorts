PORTNAME=	darknet
DISTVERSIONPREFIX=	darknet_yolo_v
DISTVERSION=	4_pre
PORTREVISION=	4
PORTEPOCH=	1
CATEGORIES=	misc # machine-learning

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Open source neural networks in C
WWW=		https://pjreddie.com/darknet/

LICENSE=	PD
LICENSE_FILE=	${WRKSRC}/LICENSE

USES=		cmake compiler:c11
USE_LDCONFIG=	yes

USE_GITHUB=	yes
GH_ACCOUNT=	AlexeyAB

CMAKE_OFF=	ENABLE_CUDA ENABLE_CUDNN ENABLE_CUDNN_HALF ENABLE_VCPKG_INTEGRATION

PLIST_FILES=	bin/darknet \
		include/darknet.h \
		include/yolo_v2_class.hpp \
		lib/libdark.so

OPTIONS_DEFINE=		OPENCV
OPTIONS_DEFAULT=	OPENCV
OPTIONS_DEFINE_x86_64=	SSE2 SSE3 SSE4 AVX
OPTIONS_DEFINE_i386=	SSE2 SSE3 SSE4 AVX
OPTIONS_DEFAULT_x86_64=	SSE2
OPTIONS_DEFAULT_i386=	SSE2
# Many secondary functions in DarkNet depend on OpenCV which is a large dependency.
# Build with OPENCV=off for a self-contained executable which would support
# core NN computations but would not support many visualization, training and
# other features.

OPENCV_USES=		pkgconfig
OPENCV_CMAKE_BOOL=	ENABLE_OPENCV
OPENCV_LIB_DEPENDS=	libopencv_video.so:graphics/opencv \
			libopencv_core.so:graphics/opencv

SSE2_DESC=		Use SSE2 instructions
SSE2_CMAKE_ON=		-DFREEBSD_SIMD="-msse2"
SSE3_DESC=		Use SSE3 instructions
SSE3_CMAKE_ON=		-DFREEBSD_SIMD="-msse3"
SSE4_DESC=		Use SSE4 instructions
SSE4_CMAKE_ON=		-DFREEBSD_SIMD="-msse4.1 -msse4.2 -msse4a"
AVX_DESC=		Use AVX instructions
AVX_CMAKE_ON=		-DFREEBSD_SIMD="-mavx -mavx2"

do-install: # https://github.com/AlexeyAB/darknet/issues/4527
	${INSTALL_PROGRAM} ${BUILD_WRKSRC}/darknet ${STAGEDIR}${PREFIX}/bin
	cd ${WRKSRC} && ${COPYTREE_SHARE} include ${STAGEDIR}${PREFIX}
	${INSTALL_DATA} ${BUILD_WRKSRC}/libdark.so ${STAGEDIR}${PREFIX}/lib
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/lib/libdark.so

.include <bsd.port.mk>
