PORTNAME=	drumstick
DISTVERSION=	2.11.1
CATEGORIES=	audio multimedia
MASTER_SITES=	SF/${PORTNAME}/${PORTVERSION}/

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	MIDI libraries for Qt/C++
WWW=		https://sourceforge.net/projects/drumstick

LICENSE=	BSD2CLAUSE
LICENSE_FILE=	${WRKSRC}/COPYING

LIB_DEPENDS= libpipewire-0.3.so:multimedia/pipewire libasound.so:audio/alsa-lib

USES= compiler:c++17-lang cmake desktop-file-utils gl pkgconfig qt:6 shared-mime-info tar:bz2 localbase:ldflags
USE_QT=		base svg 5compat tools:build
USE_GL=		gl opengl
USE_LDCONFIG=	yes

CMAKE_ARGS=	-DUSE_QT=6
CMAKE_OFF=	BUILD_TESTING

OPTIONS_DEFINE=		ALSA MANPAGES
OPTIONS_MULTI=			RT_BACKEND
OPTIONS_MULTI_RT_BACKEND=	FLUIDSYNTH NETWORK SONIVOX
OPTIONS_DEFAULT=	ALSA MANPAGES ${OPTIONS_MULTI_RT_BACKEND}
OPTIONS_SUB=		yes

ALSA_CMAKE_BOOL=	BUILD_ALSA
ALSA_USES=		localbase
ALSA_LIB_DEPENDS=	libasound.so:audio/alsa-lib

MANPAGES_CMAKE_BOOL=	BUILD_DOCS
MANPAGES_BUILD_DEPENDS=	xsltproc:textproc/libxslt \
			docbook-xsl>0:textproc/docbook-xsl

FLUIDSYNTH_DESC=	Build FluidSynth RT backend
FLUIDSYNTH_CMAKE_BOOL=	USE_FLUIDSYNTH
FLUIDSYNTH_RUN_DEPENDS=	${LOCALBASE}/share/sounds/sf2/FluidR3_GM.sf2:audio/fluid-soundfont
FLUIDSYNTH_LIB_DEPENDS=	libfluidsynth.so:audio/fluidsynth

NETWORK_DESC=		Build Network RT backend
NETWORK_CMAKE_BOOL=	USE_NETWORK # QtNetwork is used

SONIVOX_DESC=		Build FluidSynth RT backend
SONIVOX_CMAKE_BOOL=	USE_SONIVOX USE_PULSEAUDIO # these two options have to be always equal
SONIVOX_LIB_DEPENDS=	libpulse.so:audio/pulseaudio \
			libsonivox.so:audio/sonivox

RUN_DEPENDS= ${LOCALBASE}/lib/alsa-lib/libasound_module_pcm_oss.so:audio/alsa-plugins alsa-lib>=1.1.1_1:audio/alsa-lib
PLIST_FILES= bin/drumstick-drumgrid bin/drumstick-dumpmid bin/drumstick-guiplayer bin/drumstick-metronome bin/drumstick-playsmf bin/drumstick-sysinfo include/drumstick/alsaclient.h include/drumstick/alsaevent.h include/drumstick/alsaport.h include/drumstick/alsaqueue.h include/drumstick/alsatimer.h include/drumstick/playthread.h include/drumstick/sequencererror.h include/drumstick/subscription.h lib/cmake/drumstick/drumstick-alsa-config-version.cmake lib/cmake/drumstick/drumstick-alsa-config.cmake lib/cmake/drumstick/drumstick-alsa-targets-%%CMAKE_BUILD_TYPE%%.cmake lib/cmake/drumstick/drumstick-alsa-targets.cmake lib/drumstick2/libdrumstick-rt-alsa-in.so lib/drumstick2/libdrumstick-rt-alsa-out.so lib/libdrumstick-alsa.so lib/libdrumstick-alsa.so.2 lib/libdrumstick-alsa.so.2.5.0 share/applications/drumstick-drumgrid.desktop share/applications/drumstick-guiplayer.desktop %%DATADIR%%/drumstick-drumgrid_en.qm %%DATADIR%%/drumstick-drumgrid_es.qm %%DATADIR%%/drumstick-guiplayer_cs.qm %%DATADIR%%/drumstick-guiplayer_es.qm %%DATADIR%%/drumstick-guiplayer_ru.qm
post-patch:
	# instead of default.sf2 use FluidR3_GM.sf2 installed by fluid-soundfont
	@${REINPLACE_CMD} -e 's|"default.sf2"|"${LOCALBASE}/share/sounds/sf2/FluidR3_GM.sf2"|' \
		${WRKSRC}/library/rt-backends/fluidsynth/fluidsynthengine.cpp

OPTIONS_DEFAULT:= ${OPTIONS_DEFAULT:NPULSEAUDIO}
.include <bsd.port.mk>
