# Created by: Eric Anholt <anholt@FreeBSD.org>
# $FreeBSD: graphics/libGLU/Makefile 319064 2013-05-25 18:16:44Z zeising $

PORTNAME=	libGLU
PORTVERSION=	${MESAVERSION}
PORTREVISION=	2
CATEGORIES=	graphics

COMMENT=	OpenGL utility library

USE_GL=		gl
USE_XORG=	glproto x11 xext xxf86vm xdamage xfixes dri2proto

INSTALL_WRKSRC=	${WRKSRC}/src/glu
BUILD_WRKSRC=	${WRKSRC}/src/glu

pre-install:
	@${MKDIR} ${PREFIX}/include/GL/
	${INSTALL_DATA} ${WRKSRC}/include/GL/glu*.h ${PREFIX}/include/GL/

.include "${.CURDIR}/../../graphics/libGL/bsd.mesalib.mk"
.include <bsd.port.mk>
