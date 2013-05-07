# $FreeBSD: Mk/Uses/iconv.mk 316636 2013-04-26 20:44:59Z mva $
#
# handle dependency on libusb (DragonFly only)
#
# MAINTAINER: draco@marino.st
#
# Feature:	usb
# Usage:	USES=usb
# Valid ARGS:	does not require args
#
#
.if !defined(_INCLUDE_USES_USB_MK)
_INCLUDE_USES_USB_MK=	yes

.if defined(usb_ARGS)
IGNORE=	USES=usb does not require args
.endif

LIB_DEPENDS+=	usb:${PORTSDIR}/devel/libusb
CFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

.endif
