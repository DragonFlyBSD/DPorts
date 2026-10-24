PORTNAME=	bemenu
DISTVERSION=	0.6.23
CATEGORIES=	x11
MASTER_SITES=	https://github.com/Cloudef/${PORTNAME}/releases/download/${DISTVERSION}/

MAINTAINER=	uzsolt@FreeBSD.org
COMMENT=	Dynamic menu library and client program inspired by dmenu
WWW=		https://github.com/Cloudef/bemenu

LICENSE=	GPLv3+ LGPL3+
LICENSE_COMB=	multi
LICENSE_FILE_GPLv3+ =	${WRKSRC}/LICENSE-CLIENT
LICENSE_FILE_LGPL3+ =	${WRKSRC}/LICENSE-LIB

BUILD_DEPENDS=	scdoc:textproc/scdoc
LIB_DEPENDS=	libharfbuzz.so:print/harfbuzz

USES=		gmake
USE_LDCONFIG=	yes
MAKEFILE= GNUmakefile
ALL_TARGET=	clients
PLIST_SUB= SOVERSION=${DISTVERSION} WAYLAND="@comment "

OPTIONS_DEFAULT=	${OPTIONS_MULTI_BACKEND}
OPTIONS_MULTI=		BACKEND
OPTIONS_MULTI_BACKEND=	NCURSES WAYLAND X11
OPTIONS_SUB=		yes

BACKEND_DESC=	Backend

NCURSES_USES=		ncurses:base
NCURSES_ALL_TARGET=	curses
WAYLAND_CATEGORIES=	wayland
WAYLAND_BUILD_DEPENDS=	evdev-proto>0:devel/evdev-proto \
			wayland-protocols>0:graphics/wayland-protocols
WAYLAND_LIB_DEPENDS=	libwayland-client.so:graphics/wayland \
			libxkbcommon.so:x11/libxkbcommon
WAYLAND_USES=		gnome pkgconfig
WAYLAND_USE=		GNOME=cairo,glib20,pango
WAYLAND_ALL_TARGET=	wayland
X11_USES=		gnome pkgconfig xorg
X11_USE=		GNOME=cairo,glib20,pango \
			XORG=x11,xinerama
X11_ALL_TARGET=		x11

CFLAGS= -fPIC
DFLY_UNMAINTAINED= yes
post-extract:
	${REINPLACE_CMD} -e 's,$$(shell $$(PKG_CONFIG) --libs ncursesw),${NCURSES_LIB},' \
		${WRKSRC}/${MAKEFILE}
	${REINPLACE_CMD} -e 's,$$(shell $$(PKG_CONFIG) --cflags-only-I ncursesw),,' \
		${WRKSRC}/${MAKEFILE}

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/bin/${PORTNAME}
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/bin/${PORTNAME}-run
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/lib/lib${PORTNAME}.so.${DISTVERSION}
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/lib/${PORTNAME}/*.so

OPTIONS_MULTI_BACKEND:= ${OPTIONS_MULTI_BACKEND:NWAYLAND}
dfly-patch:
	${REINPLACE_CMD} -e "/renderers/s@bemenu-renderer-wayland.so@@g" \
			 -e "/install-renderers/s@install-wayland@@g" \
		${WRKSRC}/GNUmakefile


dfly-install:
	ln -fv ${STAGEDIR}${PREFIX}/share/man/man1/bemenu.1 \
	       ${STAGEDIR}${PREFIX}/share/man/man1/bemenu-run.1

.include <bsd.port.mk>
