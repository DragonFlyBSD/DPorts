# Created by: anholt@FreeBSD.org
# $FreeBSD: graphics/libGLw/Makefile 313300 2013-03-02 21:32:51Z swills $

PORTNAME=	libGLw
PORTVERSION=	${MESAVERSION}
PORTREVISION=	2
CATEGORIES=	graphics

COMMENT=	OpenGL widgets library

USE_GL=		gl
USE_MOTIF=	yes
USE_XORG=	glproto xt x11 xext xxf86vm xdamage xfixes dri2proto

do-install:
	cd ${WRKSRC}/src/glw; ${GMAKE} install

.include "${.CURDIR}/../../graphics/libGL/bsd.mesalib.mk"

.include <bsd.port.pre.mk>

.if !(${ARCH} == "x86_64" || ${ARCH} == "i386")
CONFIGURE_ARGS+=--disable-gallium-intel
.endif

.include <bsd.port.post.mk>
