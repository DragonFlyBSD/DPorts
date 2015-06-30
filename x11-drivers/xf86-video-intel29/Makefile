PORTNAME=	xf86-video-intel
PORTVERSION=	2.99.917
CATEGORIES=	x11-drivers

MAINTAINER=	ftigeot@wolfpond.org
COMMENT=	Driver for Intel integrated graphics chipsets

ONLY_FOR_ARCHS=	amd64 i386
USE_GL=		gl

USE_LDCONFIG=	yes
XORG_CAT=	driver
USE_XORG=	glproto \
		pixman \
		x11 \
		xext \
		xf86driproto \
		xineramaproto \
		xrender \
		xvmc

.include <bsd.port.options.mk>

CONFIGURE_ENV+=	xorg_cv_cc_flag__Wno_maybe_uninitialized=no
CONFIGURE_ARGS+=	--disable-glamor
LIB_DEPENDS+=	libxcb-util.so:${PORTSDIR}/x11/xcb-util
CFLAGS+=	-D_WITH_GETLINE=1

post-install:
	@${STRIP_CMD} ${STAGEDIR}${PREFIX}/lib/libIntelXvMC.so.1
	@${STRIP_CMD} ${STAGEDIR}${PREFIX}/lib/libI810XvMC.so.1
	@${STRIP_CMD} ${STAGEDIR}${PREFIX}/lib/xorg/modules/drivers/intel_drv.so

.include <bsd.port.mk>
