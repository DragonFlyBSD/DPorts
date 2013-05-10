# Created by: anholt@FreeBSD.org
# $FreeBSD: graphics/libGLw/Makefile 317215 2013-05-03 15:20:07Z bapt $

PORTNAME=	libGLw
PORTVERSION=	${MESAVERSION}
PORTREVISION=	2
CATEGORIES=	graphics

COMMENT=	OpenGL widgets library

USE_GL=		gl
USE_MOTIF=	yes
USE_XORG=	glproto xt x11 xext xxf86vm xdamage xfixes dri2proto

INSTALL_WRKSRC=	${WRKSRC}/src/glw
BUILD_WRKSRC=	${WRKSRC}/src/glw

.include "${.CURDIR}/../../graphics/libGL/bsd.mesalib.mk"

.include <bsd.port.pre.mk>

.if !(${ARCH} == "x86_64" || ${ARCH} == "i386")
CONFIGURE_ARGS+=--disable-gallium-intel
.endif

.include <bsd.port.post.mk>
