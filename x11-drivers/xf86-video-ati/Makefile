# Updated driver version, keep PORTREVISION bumping with every xorg-server bump

PORTNAME=	xf86-video-ati
PORTVERSION=	7.7.0
CATEGORIES=	x11-drivers

MAINTAINER=	x11@FreeBSD.org
COMMENT=	X.Org ati display driver

USE_GL=		gl
XORG_CAT=	driver
USE_XORG=	xf86driproto \
		xineramaproto \
		xf86miscproto \
		glproto \
		presentproto
INSTALL_TARGET=	install-strip
# No Radeon kernel driver on non-x86 and PC98.
ONLY_FOR_ARCHS=	i386 amd64

CONFIGURE_ARGS+=--disable-udev
# zrj: enable radeonsi support(requires glamor support in Xorg)
CONFIGURE_ARGS+=--enable-glamor

.include <bsd.port.options.mk>

.include <bsd.port.mk>
