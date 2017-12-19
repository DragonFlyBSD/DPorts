# DragonFly BSD newport

PORTNAME=	libinput
PORTVERSION=	1.6.0
CATEGORIES=	x11
MASTER_SITES=	http://freedesktop.org/software/${PORTNAME}/

MAINTAINER=	karu.pruun@gmail.com
COMMENT=	Generic input library (DragonFly BSD version)

LICENSE=	MIT

BUILD_DEPENDS=	v4l_compat>=0:multimedia/v4l_compat
LIB_DEPENDS=	libevdev.so:devel/libevdev \
		libudev.so:devel/libudev-devd \
		libmtdev.so:devel/libmtdev

OPTIONS_DEFINE=	EVENT_GUI LIBWACOM
OPTIONS_DEFAULT=
EVENT_GUI_DESC=	Build the GUI event viewer
LIBWACOM_DESC=	Libwacom support
OPTIONS_SUB=	yes

EVENT_GUI_USE=	GNOME=gtk30,glib20,cairo
EVENT_GUI_CONFIGURE_ENABLE=	event-gui
LIBWACOM_LIB_DEPENDS=		libwacom.so:x11/libwacom
LIBWACOM_CONFIGURE_ENABLE=	libwacom

USES=		autoreconf gmake libtool pathfix pkgconfig tar:xz
USE_LDCONFIG=	yes
GNU_CONFIGURE=	yes

CPPFLAGS+=	-I${WRKSRC}/shims
CONFIGURE_ARGS=	--disable-tests --without-libunwind
INSTALL_TARGET=	install-strip

post-patch:
	${RM} ${WRKSRC}/include/linux/input.h
	${REINPLACE_CMD} -e '/SUBDIR/ s/udev//g' ${WRKSRC}/Makefile.am

post-install-EVENT_GUI-on:
	${INSTALL_PROGRAM} ${WRKSRC}/tools/event-gui \
		${STAGEDIR}${PREFIX}/bin/libinput-event-gui

.include <bsd.port.mk>
