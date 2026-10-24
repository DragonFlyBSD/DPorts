PORTNAME=	cubicsdr
PORTVERSION=	0.2.7
PORTREVISION=	6
CATEGORIES=	comms hamradio

MAINTAINER=	hamradio@FreeBSD.org
COMMENT=	SDR receiver using liquidsdr
WWW=		https://cubicsdr.readthedocs.io/en/latest/

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/LICENSE

LIB_DEPENDS=	libhamlib.so:comms/hamlib \
		libliquid.so:comms/liquid-dsp \
		libpulse.so:audio/pulseaudio \
		libSoapySDR.so:misc/soapysdr
RUN_DEPENDS=	${LOCALBASE}/libdata/pkgconfig/dri.pc:graphics/mesa-libs \
		${PYTHON_PKGNAMEPREFIX}numpy>=1.16:math/py-numpy@${PY_FLAVOR}

USES=		cmake:noninja compiler:c++11-lib gl python
USE_GL+=	egl glu
USE_WX=		3.2

OPTIONS_DEFINE=		HAMLIB
OPTIONS_DEFAULT=	HAMLIB
HAMLIB_DESC=		Support rig control via hamlib
# for detailed debugging uncomment the next line
#CMAKE_ARGS+=   --debug-output --trace

CMAKE_ARGS+= -DUSE_AUDIO_PULSE:BOOL=OFF
CMAKE_ARGS+= -DUSE_AUDIO_ALSA:BOOL=ON
LIB_DEPENDS+= libasound.so:audio/alsa-lib
RUN_DEPENDS+= ${LOCALBASE}/lib/alsa-lib/libasound_module_pcm_oss.so:audio/alsa-plugins
RUN_DEPENDS+= alsa-lib>=1.1.1_1:audio/alsa-lib
.include <bsd.port.pre.mk>

.if ${PORT_OPTIONS:MHAMLIB}
LIB_DEPENDS+=	libhamlib.so:comms/hamlib
CMAKE_ARGS+=	-DUSE_HAMLIB=1
.endif

CMAKE_ARGS+=	-DwxWidgets_CONFIG_EXECUTABLE=${LOCALBASE}/bin/wxgtk3u-3.2-config
USE_GITHUB=	yes
GH_ACCOUNT=	cjcliffe
GH_PROJECT=	CubicSDR
GH_TAGNAME=	0248e5a
#
# N.B. modem from liquidsp was renamed to modemcf Fri Nov 12, 2021
# our port liquidsp is not synced with Master hence we are stuck here for now. -db

LIB_DEPENDS:= ${LIB_DEPENDS:Nlibpulse*}
.include <bsd.port.post.mk>
