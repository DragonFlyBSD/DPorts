PORTNAME=	xwayland

COMMENT=	X server from X.Org for running X11 applications on Wayland.

LIB_DEPENDS+=	libdrm.so:graphics/libdrm \
		libepoxy.so:graphics/libepoxy

BUILD_DEPENDS=	wayland>=1.9.0:graphics/wayland \
		${LOCALBASE}/include/linux/input.h:devel/evdev-proto

MASTERDIR=	${.CURDIR}/../xorg-server
DESCR=		${.CURDIR}/pkg-descr
USE_XORG=	x11 xtrans xinerama xkbfile xfont \
		xau xdmcp xext fontenc xv pixman

CONFIGURE_ARGS=	--disable-kdrive --disable-xephyr --disable-dmx --disable-xvfb \
		--disable-xwin --disable-xorg --enable-xwayland \
		--without-xmlto --disable-docs --disable-devel-docs \
		--disable-xnest --localstatedir=/var --without-dtrace \
		--enable-install-setuid=no

SLAVE_PORT=	yes
PLIST_FILES=	bin/Xwayland

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/hw/xwayland/Xwayland ${STAGEDIR}${PREFIX}/bin

.include "${MASTERDIR}/Makefile"
