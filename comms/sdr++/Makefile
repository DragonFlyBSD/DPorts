PORTNAME=	sdr++
DISTVERSION=	1.0.4
PORTREVISION=	4
CATEGORIES=	comms hamradio

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Cross-platform SDR software
WWW=		https://github.com/AlexandreRouma/SDRPlusPlus

LICENSE=	GPLv3
LICENSE_FILE=	${WRKSRC}/license

LIB_DEPENDS=	libad9361.so:misc/libad9361-iio \
		libairspy.so:comms/airspy \
		libairspyhf.so:comms/airspyhf \
		libfftw3f.so:math/fftw3-float \
		libglfw.so:graphics/glfw \
		libhackrf.so:comms/hackrf \
		libiio.so:misc/libiio \
		librtlsdr.so:comms/rtl-sdr \
		libSoapySDR.so:misc/soapysdr \
		libvolk.so:devel/volk

USES=		cmake compiler:c++17-lang gl pkgconfig xorg
USE_GL=		gl glew glu opengl
USE_XORG=	x11

USE_GITHUB=	yes
GH_ACCOUNT=	AlexandreRouma
GH_PROJECT=	SDRPlusPlus

OPTIONS_MULTI=			AUDIO_BACKEND
OPTIONS_MULTI_AUDIO_BACKEND=	PORTAUDIO RTAUDIO
OPTIONS_DEFAULT=		PORTAUDIO # RTAUDIO
OPTIONS_SUB=			yes

AUDIO_BACKEND_DESC=		Audio backend

PORTAUDIO_CMAKE_BOOL=		OPT_BUILD_AUDIO_SINK
PORTAUDIO_LIB_DEPENDS=		libportaudio.so:audio/portaudio

RTAUDIO_DESC=			RtAudio support
RTAUDIO_CMAKE_BOOL=		OPT_BUILD_AUDIO_SINK
RTAUDIO_LIB_DEPENDS=		librtaudio.so:audio/rtaudio
RTAUDIO_BROKEN=			see https://github.com/AlexandreRouma/SDRPlusPlus/issues/1149

.include <bsd.port.pre.mk>

.if ${ARCH} == "x86_64" || ${ARCH} == "i386"
PLIST_SUB+=     SSE=""
.else
PLIST_SUB+=     SSE="@comment "
.endif

.include <bsd.port.post.mk>
