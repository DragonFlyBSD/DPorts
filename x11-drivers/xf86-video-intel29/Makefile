# Created by: ftigeot@wolfpond.org

PORTNAME=	xf86-video-intel
PORTVERSION=	2.99.2016.06.01
PORTEPOCH=	2
CATEGORIES=	x11-drivers
MASTER_SITES=	http://dl.wolfpond.org/distfiles/

MAINTAINER=	ftigeot@wolfpond.org
COMMENT=	Driver for Intel integrated graphics chipsets

LIB_DEPENDS=	libxcb-util.so:x11/xcb-util
# Needed to build tests
LIB_DEPENDS+=	libpng.so:${PORTSDIR}/graphics/png

ONLY_FOR_ARCHS=	amd64 i386
USE_GL=		gl

USE_LDCONFIG=	yes
XORG_CAT=	driver
USE_XORG=	glproto \
		pixman \
		x11 \
		xcomposite \
		xext \
		xf86driproto \
		xineramaproto \
		xrandr \
		xrender \
		xvmc

USES+=		autoreconf:build gmake libtool cpe
CPE_VENDOR=	x

OPTIONS_DEFINE=	TOOLS

TOOLS_DESC=	Install several extra tools (for debugging)

CONFIGURE_ENV+=	xorg_cv_cc_flag__Wno_maybe_uninitialized=no
# Ensure X11 extensions are found by configure
CONFIGURE_ENV+=	CPPFLAGS="-I${LOCALBASE}/include"
INSTALL_TARGET=	install-strip
CFLAGS+=	-D_WITH_GETLINE=1

.include <bsd.port.options.mk>

# Prefer to use dfly specific sigjmp_buf for less errors
post-patch:
	${REINPLACE_CMD} -e 's@[[:<:]]jmp_buf[[:>:]]@sigjmp_buf@g'	\
		${WRKSRC}/src/sna/sna.h					\
		${WRKSRC}/src/sna/sna_accel.c

pre-configure:
	cd ${WRKDIR}/${PORTNAME}-${PORTVERSION} && NOCONFIGURE=1 ./autogen.sh

# Build and provide few tools to ease up testing
.if ${PORT_OPTIONS:MTOOLS}
USE_GNOME=	cairo

CPTS=	DrawSegments basic-copyarea basic-copyarea-size basic-copyplane	\
	basic-fillrect basic-lines basic-putimage basic-rectangle	\
	basic-stippledrect basic-stress basic-string basic-tiledrect	\
	cursor-test dri2-race dri2-speed dri2-swap dri2-test 		\
	lowlevel-blt-bench mixed-stress present-race present-speed 	\
	present-test render-composite-solid render-composite-solid-mask	\
	render-copy-alphaless render-copyarea render-copyarea-mask	\
	render-copyarea-size render-fill render-fill-copy render-glyphs	\
	render-trapezoid render-trapezoid-image render-triangle shm-test

post-build:
	echo "zrj in da tests"
	@(cd ${WRKSRC} && ${SETENV} ${MAKE_ENV} ${MAKE_CMD} ${MAKE_FLAGS} ${MAKEFILE} ${MAKE_ARGS} check)

post-install:
	${CP} ${WRKSRC}/tools/cursor ${STAGEDIR}${PREFIX}/bin/intel-cursor
	${CP} ${WRKSRC}/tools/dri3info ${STAGEDIR}${PREFIX}/bin/intel-dri3info
	@ for i in ${CPTS}; do \
		(${CP} ${WRKSRC}/test/$$i ${STAGEDIR}${PREFIX}/bin/intel-$$i ;) \
		done
# keep at auto for cursor_tool
PLIST_SUB+=		TOOLS=""
.else
# intel-virtual-output requires dri3, sys/timerfd.h ...
CONFIGURE_ARGS+=	--disable-tools
PLIST_SUB+=		TOOLS="@comment "

# cairo only needed for tools(intel-virtual-output and cursor-test)
pre-patch:
	${REINPLACE_CMD} -e 's@cairo cairo-xlib-xrender @@'	\
		${WRKSRC}/configure.ac
.endif

.include <bsd.port.mk>
