PORTNAME=	weston
PORTVERSION=	1.9.0
CATEGORIES=	graphics
MASTER_SITES=	http://wayland.freedesktop.org/releases/
MAINTAINER=	imre@vdsz.com
COMMENT=	Wayland Reference Compositor

LICENSE=	MIT

USES=		alias gmake jpeg libtool pkgconfig tar:xz
WRKSRC=		${WRKDIR}/${PORTNAME}-${PORTVERSION}
CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

USE_XORG=	x11 xcb xcursor
USE_GL=		egl gbm

LIB_DEPENDS=	libxkbcommon.so:x11/libxkbcommon		\
		libpixman-1.so:x11/pixman			\
		libcairo.so:graphics/cairo			\
		libcolord.so:graphics/colord			\
		libfontconfig.so:x11-fonts/fontconfig		\
		libfreetype.so:print/freetype2			\
		libwayland-server.so:graphics/wayland		\
		libwayland-client.so:graphics/wayland		\
		libwayland-cursor.so:graphics/wayland		\
		libevent.so:devel/libevent			\
		libdrm.so:graphics/libdrm			\
		libpng.so:graphics/png				\
		libwebp.so:graphics/webp			\
		libffi.so:devel/libffi

LIBS+=		-lexecinfo

BUILD_DEPENDS=	${LOCALBASE}/include/linux/input.h:devel/evdev-proto

RUN_DEPENDS=	${LOCALBASE}/lib/libglapi.so:graphics/mesa-libs

GNU_CONFIGURE=	YES

CONFIGURE_ARGS+=	--with-libevent=${PREFIX}
CONFIGURE_ARGS+=	--enable-egl --enable-weston-launch
CONFIGURE_ARGS+=	--enable-drm-compositor --disable-rpi-compositor
CONFIGURE_ARGS+=	--disable-fbdev-compositor --disable-vaapi-recorder
CONFIGURE_ARGS+=	--disable-dbus --enable-setuid-install
CONFIGURE_ARGS+=	--with-xserver-path=${PREFIX}/bin/Xwayland

INSTALL_TARGET=	install-strip

.include <bsd.port.mk>
