PORTNAME=	weston
PORTVERSION=	1.9.0
CATEGORIES=	graphics
MASTER_SITES=	http://wayland.freedesktop.org/releases/
MAINTAINER=	imre@vdsz.com
COMMENT=	Wayland Reference Compositor

LICENSE=	MIT

USES=		alias execinfo gmake jpeg libtool pkgconfig tar:xz
WRKSRC=		${WRKDIR}/${PORTNAME}-${PORTVERSION}
CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

USE_XORG=	x11 xcb xcursor
USE_GL=		egl gbm

LIB_DEPENDS=	libxkbcommon.so:${PORTSDIR}/x11/libxkbcommon		\
		libexecinfo.so:${PORTSDIR}/devel/libexecinfo		\
		libpixman-1.so:${PORTSDIR}/x11/pixman			\
		libcairo.so:${PORTSDIR}/graphics/cairo			\
		libcolord.so:${PORTSDIR}/graphics/colord		\
		libfontconfig.so:${PORTSDIR}/x11-fonts/fontconfig	\
		libfreetype.so:${PORTSDIR}/print/freetype2		\
		libwayland-server.so:${PORTSDIR}/graphics/wayland	\
		libwayland-client.so:${PORTSDIR}/graphics/wayland	\
		libwayland-cursor.so:${PORTSDIR}/graphics/wayland	\
		libevent.so:${PORTSDIR}/devel/libevent2			\
		libdrm.so:${PORTSDIR}/graphics/libdrm			\
		libpng.so:${PORTSDIR}/graphics/png			\
		libwebp.so:${PORTSDIR}/graphics/webp			\
		libffi.so:${PORTSDIR}/devel/libffi

LIBS+=		-lexecinfo

BUILD_DEPENDS=	${LOCALBASE}/include/linux/input.h:${PORTSDIR}/multimedia/v4l_compat

RUN_DEPENDS=	${LOCALBASE}/lib/libglapi.so.0:${PORTSDIR}/graphics/libglapi

GNU_CONFIGURE=	YES

CONFIGURE_ARGS+=	--with-libevent=${PREFIX}
CONFIGURE_ARGS+=	--disable-egl --enable-weston-launch
CONFIGURE_ARGS+=	--enable-drm-compositor --disable-rpi-compositor
CONFIGURE_ARGS+=	--disable-fbdev-compositor --disable-vaapi-recorder
CONFIGURE_ARGS+=	--disable-dbus --enable-setuid-install
CONFIGURE_ARGS+=	--with-xserver-path=${PREFIX}/bin/Xwayland

.include <bsd.port.mk>
