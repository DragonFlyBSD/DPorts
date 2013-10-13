# Created by: Eric Anholt <anholt@FreeBSD.org>
# $FreeBSD: x11/libXrandr/Makefile 328711 2013-09-29 17:01:41Z zeising $

PORTNAME=	libXrandr
PORTVERSION=	1.4.2
CATEGORIES=	x11

MAINTAINER=	x11@FreeBSD.org
COMMENT=	X Resize and Rotate extension library

LICENSE=	MIT

XORG_CAT=	lib
USE_XORG=	x11 randrproto:both xext xextproto xrender renderproto xproto:both

MAN3=		Xrandr.3 \
		XRRConfigCurrentConfiguration.3 \
		XRRConfigCurrentRate.3 \
		XRRConfigRates.3 \
		XRRConfigRotations.3 \
		XRRConfigSizes.3 \
		XRRConfigTimes.3 \
		XRRFreeScreenConfigInfo.3 \
		XRRGetScreenInfo.3 \
		XRRQueryExtension.3 \
		XRRQueryVersion.3 \
		XRRRootToScreen.3 \
		XRRSelectInput.3 \
		XRRSetScreenConfig.3 \
		XRRSetScreenConfigAndRate.3

NO_STAGE=	yes
.include <bsd.port.mk>
