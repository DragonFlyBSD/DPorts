PORTNAME=	xf86-input-joystick
DISTVERSION=	1.6.4
CATEGORIES=	x11-drivers

MAINTAINER=	x11@FreeBSD.org
COMMENT=	X.Org joystick input driver
WWW=		https://gitlab.freedesktop.org/xorg/driver/xf86-input-joystick

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/COPYING

USES= pathfix xorg-cat:driver autoreconf pkgconfig

PATHFIX_MAKEFILEIN= Makefile.am
.include <bsd.port.options.mk>
pre-configure:
.if ${DFLYVERSION} >= 300703
	${REINPLACE_CMD} -e 's|bus/usb/usbhid|bus/u4b/usbhid|g' \
		${WRKSRC}/configure.ac
.endif

.include <bsd.port.mk>
