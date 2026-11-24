PORTNAME=	kicad
DISTVERSION=	10.0.6
PORTREVISION=	1
PORTEPOCH=	2
CATEGORIES=	cad

MAINTAINER=	cmt@FreeBSD.org
COMMENT=	Schematic and PCB editing software
WWW=		https://kicad.org/

LICENSE=	GPLv2

BUILD_DEPENDS=	${LOCALBASE}/include/glm/glm.hpp:math/glm	\
		swig:devel/swig				\
		gtar:archivers/gtar
LIB_DEPENDS=	libboost_locale.so:devel/boost-libs	\
		libabsl_log_internal_check_op.so:devel/abseil		\
		libgit2.so:devel/libgit2		\
		libprotobuf.so:devel/protobuf		\
		libnng.so:net/nng			\
		libharfbuzz.so:print/harfbuzz		\
		libngspice.so:cad/ngspice_rework@shlib	\
		libTKernel.so:cad/opencascade		\
		libpixman-1.so:x11/pixman		\
		libzstd.so:archivers/zstd		\
		libcurl.so:ftp/curl			\
		libwayland-client.so:graphics/wayland	\
		libfreetype.so:print/freetype2		\
		libsecret-1.so:security/libsecret	\
		libfontconfig.so:x11-fonts/fontconfig	\
		libspnav.so:misc/libspnav		\
		libpoppler-glib.so:graphics/poppler-glib	\
		libodbc.so:databases/unixODBC

USES=		cmake:noninja compiler:c++20-lang cpe desktop-file-utils \
		gnome pkgconfig python shared-mime-info shebangfix \
		tar:bz2 xorg
CPE_VENDOR=	kicad
CPE_PRODUCT=	eda
SHEBANG_FILES=	pcbnew/python/plugins/touch_slider_wizard.py

USE_XORG=	ice x11 xext
USE_GL=		egl gl glu glut opengl
USE_WX=		3.2
WX_COMPS=	python:lib wx
USE_GNOME=	atk cairo gdkpixbuf gtk30 pango

USE_GITLAB=	yes
GL_ACCOUNT=	kicad/code
GL_PROJECT=	kicad

CXXFLAGS+= -I${WRKSRC}/include -I${LOCALBASE}/include -Wno-deprecated-declarations -fext-numeric-literals -DBOOST_STACKTRACE_GNU_SOURCE_NOT_REQUIRED
CXXFLAGS_powerpc=	-O0
CXXFLAGS+=	-include ${WRKDIR}/dfly-no-major-minor.h
CMAKE_ARGS=	-DwxWidgets_CONFIG_EXECUTABLE=${WX_CONFIG}	\
		-DwxWidgets_USE_UNICODE=ON			\
		-DwxWidgets_wxrc_EXECUTABLE=${WXRC_CMD}		\
		-DKICAD_SPICE_QA=ON				\
		-DKICAD_USE_SENTRY=OFF				\
		-DKICAD_SIGNAL_INTEGRITY=ON			\
		-DKICAD_BUILD_QA_TESTS=ON			\
		-DKICAD_SCRIPTING_WXPYTHON=ON			\
		-DKICAD_UPDATE_CHECK=OFF			\
		-DKICAD_USE_EGL=ON				\
		-DKICAD_WAYLAND=ON				\
		-DKICAD_INSTALL_DEMOS=ON			\
		-DNANODBC_ENABLE_BOOST=ON			\
		-DOCC_INCLUDE_DIR=${LOCALBASE}/include/OpenCASCADE	\
		-DTAR=${LOCALBASE}/bin/gtar
CMAKE_ENV+=	DODBC_PATH=${LOCALBASE}
USE_LDCONFIG=	yes

# SOVERSION helps testing rc packages
PLIST_SUB=	DESKTOPDIR=${DESKTOPDIR:S|^${PREFIX}/||} \
		SOVERSION=${PORTVERSION:C/.r[0-9.]*//}

OPTIONS_DEFINE=	NLS
OPTIONS_SUB=	yes

NLS_USES=	gettext
NLS_CMAKE_BOOL= KICAD_BUILD_I18N

CONFLICTS_INSTALL=	kicad-devel # bin/_cvpcb.kiface

USE_GCC_VERSION= ${GCC_DEFAULT}
USES+= localbase:ldflags
pre-configure:
	${REINPLACE_CMD} -e 's|/usr/local/bin/xdg-open|${LOCALBASE}/bin/xdg-open|' \
		${WRKSRC}/common/pgm_base.cpp

dfly-patch:
	${REINPLACE_CMD} -e 's|__FreeBSD__|__DragonFly__|' \
		${WRKSRC}/thirdparty/libcontext/libcontext.h
	cd ${WRKSRC} && ${GREP} -rlF --include='*.h' --include='*.cpp' \
		'#if defined(__linux__) || defined(__FreeBSD__)' . | \
		${XARGS} ${REINPLACE_CMD} -e 's/^#if defined(__linux__) || defined(__FreeBSD__)$$/& || defined(__DragonFly__)/'
	# No ENODATA here; FreeBSD gets libc++'s value.
	${REINPLACE_CMD} -e 's|= ENODATA,|= 9919,|' \
		${WRKSRC}/thirdparty/3dxware_sdk/inc/navlib/navlib_types.h

post-patch:
	@${PRINTF} '#include <sys/types.h>\n#undef major\n#undef minor\n' > ${WRKDIR}/dfly-no-major-minor.h

.include <bsd.port.mk>
