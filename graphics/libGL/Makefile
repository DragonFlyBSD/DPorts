# Created by: Eric Anholt <anholt@FreeBSD.org>
# $FreeBSD: graphics/libGL/Makefile 334972 2013-11-26 20:58:53Z kwm $

PORTNAME=	libGL
PORTVERSION=	${MESAVERSION}
PORTREVISION=	${LIBGLREVISION}
CATEGORIES=	graphics

COMMENT=	OpenGL library that renders using GLX or DRI

LIB_DEPENDS+=	libdrm.so:${PORTSDIR}/graphics/libdrm \
		libexpat.so:${PORTSDIR}/textproc/expat2

USES=		pkgconfig
USE_XORG=	glproto x11 xext xxf86vm xdamage xfixes dri2proto:both

SUB_FILES=	pkg-install pkg-deinstall

.include <bsd.port.options.mk>

.if defined(WITH_NEW_XORG)
LIBGLREVISION=	0
.else
LIBGLREVISION=	4
.endif

.include "${.CURDIR}/bsd.mesalib.mk"

.if !(${ARCH} == "x86_64" || ${ARCH} == "i386")
CONFIGURE_ARGS+=--disable-gallium-intel
.endif

.include <bsd.port.mk>
