PORTNAME=	openfx-arena
PORTVERSION=	2.4.3
DISTVERSIONPREFIX=	Natron-
PORTREVISION=	25
CATEGORIES=	graphics

MAINTAINER=	olivier@FreeBSD.org
COMMENT=	Extra OpenFX plugins for Natron
WWW=		https://github.com/NatronGitHub/openfx-arena

LICENSE=	GPLv2

BROKEN=		Fails to build, ld: error: unable to find library -l-lpthread

ONLY_FOR_ARCHS=	amd64 powerpc64 powerpc64le
BUILD_DEPENDS=	opencl>=0:devel/opencl
LIB_DEPENDS=	libOpenColorIO.so:graphics/opencolorio \
		libfontconfig.so:x11-fonts/fontconfig \
		libfribidi.so:converters/fribidi \
		libcdr-0.1.so:graphics/libcdr01 \
		librevenge-0.0.so:textproc/librevenge \
		libpoppler-glib.so:graphics/poppler-glib \
		liblcms2.so:graphics/lcms2 \
		libzip.so:archivers/libzip \
		libexpat.so:textproc/expat2 \
		libfreetype.so:print/freetype2 \
		libpcre.so:devel/pcre \
		libffi.so:devel/libffi \
		libdrm.so:graphics/libdrm \
		libpng.so:graphics/png \
		libharfbuzz.so:print/harfbuzz \
		libgraphite2.so:graphics/graphite2 \
		libicui18n.so:devel/icu \
		liblqr-1.so:graphics/liblqr-1 \
		libfftw3.so:math/fftw3 \
		libltdl.so:devel/libltdl \
		libpoppler.so:graphics/poppler \
		libraqm.so:print/libraqm

USES=		compiler:c++20-lang gl gmake gnome iconv magick:6 ssl xorg
USE_GITHUB=	yes
GH_ACCOUNT=	NatronGitHub
GH_TUPLE=	NatronGitHub:openfx-supportext:79d8c22:openfx_supportext/SupportExt \
		NatronGitHub:openfx:d5db5d0:openfx/OpenFX \
		NatronGitHub:openfx-io:c6ad47b:OpenFX_IO/OpenFX-IO \
		lvandeve:lodepng:5601b82:dummy/lodepng \
		NatronGitHub:SequenceParsing:3c93fcc:SequenceParsing/OpenFX-IO/IOSupport/SequenceParsing \
		NatronGitHub:tinydir:64fb1d4:tinydir/OpenFX-IO/IOSupport/SequenceParsing/tinydir

MAKE_ENV+=	CONFIG=release
USE_GL=	gl
USE_GNOME=	libxml2 pango cairo librsvg2
USE_XORG+=	x11 xcb xau xdamage xfixes xft xxf86vm xrender xext xdmcp pixman sm ice xt
MAKE_ENV+=	CONFIG=release

PLIST_SUB= OPSYS=${OPSYS}
IGNORE= unmaintained, please request fixing to users mailing list
post-extract:
	@${RMDIR} ${WRKSRC}/OpenFX-IO/openfx
	${LN} -s ../OpenFX ${WRKSRC}/OpenFX-IO/openfx

post-patch:
	@${REINPLACE_CMD} -e 's|/usr/OFX/Plugins|${PREFIX}/OFX/Plugins|g' \
		${WRKSRC}/OpenFX/Examples/Makefile.master \
		${WRKSRC}/OpenFX/Support/Plugins/Makefile.master \
		${WRKSRC}/OpenFX/HostSupport/src/ofxhPluginCache.cpp
	@${REINPLACE_CMD} -e 's|/Contents/$$(ARCH)|/Contents/${OPSYS}-x86-64/|g' \
		${WRKSRC}/OpenFX/Support/Plugins/Makefile.master
post-install:
	${STRIP_CMD} ${STAGEDIR}${LOCALBASE}/OFX/Plugins/Arena.ofx.bundle/Contents/${OPSYS}-x86-64/Arena.ofx

dfly-patch:
	${REINPLACE_CMD} -e 's@FreeBSD@DragonFly@g' \
		${WRKSRC}/OpenFX-IO/IO/Makefile \
		${WRKSRC}/OpenFX/Support/Plugins/Makefile.master
	${REINPLACE_CMD} -e 's@__FreeBSD__@__DragonFly__@g' \
		${WRKSRC}/OpenFX/Documentation/sources/Guide/Code/Example1/basics.cpp \
		${WRKSRC}/OpenFX/Documentation/sources/Guide/Code/Example2/invert.cpp \
		${WRKSRC}/OpenFX/Documentation/sources/Guide/Code/Example3/gain.cpp \
		${WRKSRC}/OpenFX/Documentation/sources/Guide/Code/Example4/saturation.cpp \
		${WRKSRC}/OpenFX/Documentation/sources/Guide/Code/Example5/circle.cpp \
		${WRKSRC}/OpenFX/Examples/Basic/basic.cpp \
		${WRKSRC}/OpenFX/Examples/Custom/custom.cpp \
		${WRKSRC}/OpenFX/Examples/DepthConverter/depthConverter.cpp \
		${WRKSRC}/OpenFX/Examples/Invert/invert.cpp \
		${WRKSRC}/OpenFX/Examples/OpenGL/opengl.cpp \
		${WRKSRC}/OpenFX/Examples/Overlay/overlay.cpp \
		${WRKSRC}/OpenFX/Examples/Rectangle/rectangle.cpp \
		${WRKSRC}/OpenFX/Examples/Test/testProperties.cpp \
		${WRKSRC}/OpenFX/HostSupport/include/ofxhBinary.h \
		${WRKSRC}/OpenFX/HostSupport/src/ofxhPluginCache.cpp \
		${WRKSRC}/OpenFX/Support/Library/ofxsImageEffect.cpp

.include <bsd.port.mk>
