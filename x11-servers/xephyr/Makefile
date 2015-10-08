# $FreeBSD$

PORTNAME=	xephyr

COMMENT=	X server from X.Org based on kdrive

MASTERDIR=	${.CURDIR}/../xorg-server
DESCR=		${.CURDIR}/pkg-descr
USE_XORG=	x11 xf86driproto glproto randrproto renderproto fixesproto \
		dri2proto damageproto xcmiscproto xtrans inputproto \
		xf86bigfontproto scrnsaverproto bigreqsproto \
		resourceproto fontsproto videoproto \
		compositeproto trapproto recordproto \
		xineramaproto xinerama evieproto xkbfile xfont \
		xau xdmcp xext fontenc xv pixman

CONFIGURE_ARGS=	--enable-kdrive --enable-xephyr	--disable-dmx --disable-xvfb \
		--without-xmlto --disable-docs --disable-devel-docs \
		--disable-xnest --localstatedir=/var --without-dtrace

SLAVE_PORT=	yes
PLIST_FILES=	bin/Xephyr man/man1/Xephyr.1.gz
USE_XORG+=	presentproto xcb
BUILD_DEPENDS+=	${LOCALBASE}/libdata/pkgconfig/xcb-renderutil.pc:${PORTSDIR}/x11/xcb-util-renderutil \
		${LOCALBASE}/libdata/pkgconfig/xcb-icccm.pc:${PORTSDIR}/x11/xcb-util-wm \
		${LOCALBASE}/libdata/pkgconfig/xcb-keysyms.pc:${PORTSDIR}/x11/xcb-util-keysyms \
		${LOCALBASE}/libdata/pkgconfig/xcb-image.pc:${PORTSDIR}/x11/xcb-util-image \


do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/hw/kdrive/ephyr/Xephyr ${STAGEDIR}${PREFIX}/bin/
	${INSTALL_MAN} ${WRKSRC}/hw/kdrive/ephyr/man/Xephyr.1 ${STAGEDIR}${PREFIX}/man/man1/

.include "${MASTERDIR}/Makefile"
