# $FreeBSD$

PORTNAME=	xf86-video-ati
PORTVERSION=	7.10.0
PORTEPOCH=	1
CATEGORIES=	x11-drivers

MAINTAINER=	ftigeot@wolfpond.org
COMMENT=	X.Org ati display driver

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/COPYING

LIB_DEPENDS=	libpciaccess.so:devel/libpciaccess \
		libdrm_radeon.so:graphics/libdrm

CONFLICTS_INSTALL=	xf86-video-ati-legacy

USE_GL=		gl
XORG_CAT=	driver
USE_XORG=	pciaccess

CONFIGURE_ARGS+=--disable-udev

.include <bsd.port.mk>
