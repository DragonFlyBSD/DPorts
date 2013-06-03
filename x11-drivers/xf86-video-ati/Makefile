# $FreeBSD: x11-drivers/xf86-video-ati/Makefile 319055 2013-05-25 14:37:02Z zeising $

PORTNAME=	xf86-video-ati
PORTVERSION=	6.14.6
CATEGORIES=	x11-drivers

MAINTAINER=	x11@FreeBSD.org
COMMENT=	X.Org ati display driver

USE_GL=		gl
XORG_CAT=	driver
USE_XORG=	xf86driproto xineramaproto xf86miscproto glproto
MAN4=		ati.4x radeon.4x

CONFIGURE_ARGS+=--disable-kms

.include <bsd.port.mk>
