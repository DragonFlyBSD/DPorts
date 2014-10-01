# $FreeBSD$
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

.if !empty(usb_ARGS)
IGNORE=	USES=usb does not require args
.endif

.if ${DFLYVERSION} < 300703
LIB_DEPENDS+=	usb:${PORTSDIR}/devel/libusb
CFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib
DF_OLD_USB=	yes
.else
DF_NEW_USB=	yes
.endif

.endif
