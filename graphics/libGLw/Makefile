# New ports collection makefile for:    libGLw
# Date created:		7 May 2004
# Whom:			anholt@FreeBSD.org
#
# $FreeBSD: ports/graphics/libGLw/Makefile,v 1.16 2012/11/17 05:58:12 svnexp Exp $
#

PORTNAME=	libGLw
PORTVERSION=	${MESAVERSION}
PORTREVISION=	1
CATEGORIES=	graphics

COMMENT=	OpenGL widgets library

USE_GL=		gl
USE_MOTIF=	yes
USE_XORG=	glproto xt x11 xext xxf86vm xdamage xfixes dri2proto

do-install:
	cd ${WRKSRC}/src/glw; ${GMAKE} install

.include "${.CURDIR}/../../graphics/libGL/bsd.mesalib.mk"

.include <bsd.port.pre.mk>

.if ${ARCH} != "x86_64" || ${ARCH} != "i386"
CONFIGURE_ARGS+=--disable-gallium-intel
.endif

.include <bsd.port.post.mk>
