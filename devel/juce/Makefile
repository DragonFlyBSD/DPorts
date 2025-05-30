PORTNAME=	juce
DISTVERSION=	6.0.8
PORTREVISION=	4
CATEGORIES=	devel

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	C++ application framework to develop desktop and mobile applications

LICENSE=	JUCE6
LICENSE_NAME=	JUCE 6 End User License Agreement
LICENSE_FILE=	${WRKSRC}/LICENSE.md
LICENSE_PERMS=	auto-accept dist-mirror pkg-mirror

BROKEN_riscv64=	Hard-float 'd' ABI can't be used for a target that doesn't support the D instruction set extension (ignoring target-abi)

BUILD_DEPENDS=	ladspa>0:audio/ladspa
LIB_DEPENDS=	libasound.so:audio/alsa-lib \
		libfreetype.so:print/freetype2 \
		libsysinfo.so:devel/libsysinfo

USES=		cmake compiler:c++11-lang dos2unix gl localbase:ldflags pkgconfig xorg
DOS2UNIX_FILES=	modules/juce_core/juce_core.h
USE_GL=		gl
USE_XORG=	x11 xcomposite xcursor xext xinerama xorgproto xrandr

USE_GITHUB=	yes
GH_ACCOUNT=	yurivict # juce-framework + BSD patches
GH_PROJECT=	JUCE
GH_TAGNAME=	f37e9a1

CMAKE_ON=	JUCE_BUILD_EXTRAS

CXXFLAGS+=	-I${LOCALBASE}/include/freetype2
LDFLAGS+=	-pthread -lfreetype -lpng16
LDFLAGS+=	-lGL # while building NetworkGraphicsDemo ld: error: undefined symbol: glXGetCurrentContext referenced by ld-temp.o
LDFLAGS+=	-lasound # while building AudioPerformanceTest ld: error: undefined symbol: snd_seq_system_info_sizeof
LDFLAGS+=	-lsysinfo # while building Projucer ld: error: undefined symbol: sysinfo

CONFIGURE_ENV+=	CXXFLAGS="${CXXFLAGS}" LDFLAGS="${LDFLAGS} -lexecinfo" # for the step 'Building juceaide' during configure phase: https://github.com/juce-framework/JUCE/issues/877

PLIST_SUB+=	VERSION=${PORTVERSION}

OPTIONS_DEFINE=		DEMOS

DEMOS_DESC=		Build and install demo programs
DEMOS_USES=		gnome pkgconfig
DEMOS_CMAKE_BOOL=	JUCE_BUILD_EXAMPLES
DEMOS_LDFLAGS=		-lexecinfo
DEMOS_USE=		GNOME=atk,cairo,gdkpixbuf2,gtk30,pango
DEMOS_LIB_DEPENDS=	libcurl.so:ftp/curl \
			libwebkit2gtk-4.0.so:www/webkit2-gtk3 \
			libsoup-2.4.so:devel/libsoup
DEMO_FILES=	\
	AnalyticsCollectionDemo AnimationAppDemo AnimationDemo AudioAppDemo AudioLatencyDemo AudioPlaybackDemo AudioPluginDemo AudioRecordingDemo AudioSettingsDemo AudioSynthesiserDemo \
	BlocksDrawingDemo BlocksMonitorDemo BlocksSynthDemo BouncingBallWavetableDemo Box2DDemo ChildProcessDemo CodeEditorDemo ComponentDemo ComponentTransformsDemo ConvolutionDemo \
	CryptographyDemo DSPModulePluginDemo DialogsDemo FIRFilterDemo FlexBoxDemo FontsDemo GainDemo GraphicsDemo GridDemo HelloWorldDemo \
	IIRFilterDemo ImagesDemo InAppPurchasesDemo JavaScriptDemo KeyMappingsDemo LiveConstantDemo LookAndFeelDemo MDIDemo MPEDemo MenusDemo \
	MidiDemo MultiTouchDemo MultithreadingDemo NetworkingDemo OSCDemo OpenGLAppDemo OpenGLDemo OscillatorDemo OverdriveDemo PluckedStringsDemo \
	PropertiesDemo SIMDRegisterDemo SimpleFFTDemo StateVariableFilterDemo SystemInfoDemo TimersAndEventsDemo UnitTestsDemo ValueTreesDemo WaveShaperTanhDemo WebBrowserDemo \
	WidgetsDemo WindowsDemo XMLandJSONDemo
DEMOS_PLIST_FILES=	${DEMO_FILES:S/^/bin\/${PORTNAME}-/}

post-patch:
	# fix fonts.conf path
	@${REINPLACE_CMD} -i '' -e ' \
		s|"/etc/fonts/fonts.conf"|"${PREFIX}/etc/fonts/fonts.conf"| ; \
		s|"/usr/share/fonts/fonts.conf"|"${PREFIX}/share/fonts/fonts.conf"| \
		' ${WRKSRC}/modules/juce_graphics/native/juce_linux_Fonts.cpp
	# fix JUCE modules path (but it still complains about the path)
	@${REINPLACE_CMD} -i '' -e ' \
		s|"~/JUCE|"${PREFIX}/include/JUCE-${PORTVERSION}| \
		' ${WRKSRC}/extras/Projucer/Source/Settings/jucer_StoredSettings.cpp

post-install:
	# install extras which are essential apps that aren't installed by the project for some reason
.for exe in AudioPerformanceTest AudioPluginHost BinaryBuilder NetworkGraphicsDemo Projucer UnitTestRunner
	${INSTALL_PROGRAM} ${BUILD_WRKSRC}/extras/${exe}/${exe}_artefacts/Release/${exe} ${STAGEDIR}${PREFIX}/bin
.endfor
	# fix path and strip juceaide
	cd ${STAGEDIR}${PREFIX} && ${MV} bin/JUCE-${PORTVERSION}/juceaide bin/ && ${RMDIR} bin/JUCE-${PORTVERSION}
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/bin/juceaide

do-install-DEMOS-on:
.for e in ${DEMO_FILES}
	${INSTALL_PROGRAM} `${FIND} ${BUILD_WRKSRC} -name ${e}` ${STAGEDIR}${PREFIX}/bin/${PORTNAME}-${e}
.endfor

.include <bsd.port.mk>
