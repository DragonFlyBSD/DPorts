# Created by: Florent Thoumie <flz@FreeBSD.org>
# $FreeBSD$

PORTNAME=	chromium
PORTVERSION=	60.0.3112.116
CATEGORIES=	www
MASTER_SITES=	http://commondatastorage.googleapis.com/chromium-browser-official/
DISTFILES=	${DISTNAME}${EXTRACT_SUFX}

MAINTAINER=	chromium@FreeBSD.org
COMMENT=	Google web browser based on WebKit

LICENSE=	BSD3CLAUSE LGPL21 MPL11
LICENSE_COMB=	multi

BUILD_DEPENDS=	bash:shells/bash \
		python:lang/python \
		gperf:devel/gperf

LIB_DEPENDS=	libcairo.so:graphics/cairo \
		libcups.so:print/cups \
		libdrm.so:graphics/libdrm \
		libexpat.so:textproc/expat2 \
		libfreetype.so:print/freetype2 \
		libharfbuzz.so:print/harfbuzz \
		libfontconfig.so:x11-fonts/fontconfig \
		libgcrypt.so:security/libgcrypt \
		libnspr4.so:devel/nspr \
		libnss3.so:security/nss \
		libpci.so:devel/libpci \
		libasound.so:audio/alsa-lib \
		libdbus-1.so:devel/dbus \
		libdbus-glib-1.so:devel/dbus-glib \
		libkrb5.so:security/krb5 \
		# end

RUN_DEPENDS=	droid-fonts-ttf>0:x11-fonts/droid-fonts-ttf \
		${LOCALBASE}/lib/alsa-lib/libasound_module_pcm_oss.so:audio/alsa-plugins \
		xdg-open:devel/xdg-utils

ONLY_FOR_ARCHS=	i386 amd64
USES=		compiler bison cpe desktop-file-utils \
		ninja perl5 pkgconfig python:2,build shebangfix tar:xz

CPE_VENDOR=	google
CPE_PRODUCT=	chrome
USE_PERL5=	build
USE_XORG=	scrnsaverproto x11 xcb xcomposite xcursor xext xdamage xfixes xi \
		xproto xrandr xrender xscrnsaver xtst
USE_GNOME=	atk glib20 gtk30
MAKE_ARGS=	-C out/${BUILDTYPE}
SHEBANG_FILES=	chrome/tools/build/linux/chrome-wrapper
ALL_TARGET=	chrome
INSTALLS_ICONS=	yes

# TODO bz@ : install libwidevinecdm.so (see third_party/widevine/cdm/BUILD.gn)
#
# Run "./out/${BUILDTYPE}/gn args out/${BUILDTYPE} --list" for all variables.
# Some parts don't have use_system_* flag, and can be turned on/off by using
# replace_gn_files.py script, some parts just turned on/off for target host
# OS "target_os == is_bsd", like libusb, libpci.
GN_ARGS+=	\
		treat_warnings_as_errors=true \
		use_pulseaudio=false \
		use_sysroot=false
GN_BOOTSTRAP_FLAGS=	--no-clean --gn-gen-args="use_sysroot=false"

# XXX: technically for us these are a no-no
# FreeBSD Chromium Api Key
# Set up Google API keys, see http://www.chromium.org/developers/how-tos/api-keys .
# Note: these are for FreeBSD use ONLY. For your own distribution,
# please get your own set of keys.
GN_ARGS+=	google_api_key="AIzaSyBsp9n41JLW8jCokwn7vhoaMejDFRd1mp8" \
		google_default_client_id="996322985003.apps.googleusercontent.com" \
		google_default_client_secret="IR1za9-1VK0zZ0f_O8MVFicn"

SUB_FILES=	chrome chromium-browser.desktop
SUB_LIST+=	COMMENT="${COMMENT}"

OPTIONS_DEFINE=	CODECS
CODECS_DESC=	Compile and enable patented codecs like H.264

OPTIONS_DEFAULT=	CODECS

.include <bsd.port.options.mk>

.if ${PORT_OPTIONS:MCODECS}
GN_ARGS+=	ffmpeg_branding="Chrome"
GN_ARGS+=	proprietary_codecs=true
GN_ARGS+=	enable_hevc_demuxing=true
.else
GN_ARGS+=	ffmpeg_branding="Chromium"
GN_ARGS+=	proprietary_codecs=false
GN_ARGS+=	enable_hevc_demuxing=false
.endif

DEBUG_MAKE_ENV=	V=1
.if ${PORT_OPTIONS:MDEBUG}
BUILDTYPE=	Debug
GN_ARGS+=	is_debug=true
GN_BOOTSTRAP_FLAGS+=	--debug
MAKE_ENV+=	LD_LIBRARY_PATH=${WRKSRC}/out/Debug
.else
BUILDTYPE=	Release
.if ${OPSYS} == FreeBSD && ${ARCH} == x86_64
GN_ARGS+=	use_lld=true # harder, better, faster, stronger
.endif
GN_ARGS+=	is_debug=false
GN_ARGS+=	symbol_level=0
GN_ARGS+=	remove_webcore_debug_symbols=true
.endif

.include <bsd.port.pre.mk>

.if ${OPSYS} == FreeBSD
CC=		clang39
CXX=		clang++39
#optionally set AR, LD, NM, READELF ?

# TODO: -isystem, would be just as ugly as this approach, but more reliably
# build would fail without C_INCLUDE_PATH/CPLUS_INCLUDE_PATH env var set.
MAKE_ENV+=	C_INCLUDE_PATH=${LOCALBASE}/include \
		CPLUS_INCLUDE_PATH=${LOCALBASE}/include
# TODO: move this big extra to small ones
EXTRA_PATCHES+=	${FILESDIR}/extra-patch-clang
.endif

.if ${OPSYS} == FreeBSD
.if ${OSVERSION} < 1100000
EXTRA_PATCHES+=	${FILESDIR}/extra-patch-10
.endif

.if ${OSVERSION} >= 1200017 || (${OSVERSION} >= 1100508 && ${OSVERSION} < 1200000)
EXTRA_PATCHES+=	${FILESDIR}/extra-patch-libc++-new
.else
EXTRA_PATCHES+=	${FILESDIR}/extra-patch-libc++-old
.endif
.endif

pre-everything::
	@${ECHO_MSG}
	@${ECHO_MSG} "To build Chromium, you should have around 16GB of memory,"
	@${ECHO_MSG} "and lots of free diskspace (~ 40GB)."
	@${ECHO_MSG}
	@${ECHO_MSG} "Make sure you have Python build with the SEM option ON"
	@${ECHO_MSG} "(default in python27-2.7.8 since r361735)"
	@${ECHO_MSG}

do-configure:
	# GN generator bootstrapping and generating ninja files
	cd ${WRKSRC} && ${SETENV} CC=${CC} CXX=${CXX} LD=${CXX} \
		READELF=${READELF} AR=${AR} NM=${NM} ${PYTHON_CMD} \
		./tools/gn/bootstrap/bootstrap.py ${GN_BOOTSTRAP_FLAGS}
	cd ${WRKSRC} && ${SETENV} ./out/${BUILDTYPE}/gn \
		gen --args='${GN_ARGS}' out/${BUILDTYPE}

do-install:
	@${MKDIR} ${STAGEDIR}${DATADIR}
	${INSTALL_MAN} ${WRKSRC}/out/${BUILDTYPE}/chrome.1 ${STAGEDIR}${MANPREFIX}/man/man1
.for s in 22 24 48 64 128 256
	@${MKDIR} ${STAGEDIR}${PREFIX}/share/icons/hicolor/${s}x${s}/apps
	${INSTALL_DATA} ${WRKSRC}/chrome/app/theme/chromium/product_logo_${s}.png \
		${STAGEDIR}${PREFIX}/share/icons/hicolor/${s}x${s}/apps/chrome.png
.endfor
	${INSTALL_SCRIPT} ${WRKSRC}/chrome/tools/build/linux/chrome-wrapper \
		${STAGEDIR}${DATADIR}
	${INSTALL_DATA} ${WRKSRC}/out/${BUILDTYPE}/*.pak \
		${STAGEDIR}${DATADIR}
.for d in icudtl.dat natives_blob.bin snapshot_blob.bin
	${INSTALL_DATA} ${WRKSRC}/out/${BUILDTYPE}/${d} ${STAGEDIR}${DATADIR}
.endfor
	@${MKDIR} ${STAGEDIR}${DATADIR}/swiftshader
.for d in libEGL.so libGLESv2.so
	${INSTALL_DATA} ${WRKSRC}/out/${BUILDTYPE}/swiftshader/${d} ${STAGEDIR}${DATADIR}/swiftshader
.endfor
	${INSTALL_PROGRAM} ${WRKSRC}/out/${BUILDTYPE}/chrome \
		${STAGEDIR}${DATADIR}
	cd ${WRKSRC}/out/${BUILDTYPE} && \
		${COPYTREE_SHARE} "locales resources" ${STAGEDIR}${DATADIR}
	@${MKDIR} ${STAGEDIR}${DESKTOPDIR}
	${INSTALL_DATA} ${WRKDIR}/chromium-browser.desktop \
		${STAGEDIR}${DESKTOPDIR}
	${INSTALL_SCRIPT} ${WRKDIR}/chrome ${STAGEDIR}${PREFIX}/bin

.include <bsd.port.post.mk>
