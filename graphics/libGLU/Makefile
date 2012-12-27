# New ports collection makefile for:    libGLU
# Date created:		7 May 2004
# Whom:			anholt@FreeBSD.org
#
# $FreeBSD: ports/graphics/libGLU/Makefile,v 1.18 2012/11/17 05:58:12 svnexp Exp $
#

PORTNAME=	libGLU
PORTREVISION=	1
PORTVERSION=	${MESAVERSION}
CATEGORIES=	graphics

COMMENT=	OpenGL utility library

USE_GL=		gl
USE_XORG=	glproto x11 xext xxf86vm xdamage xfixes dri2proto

do-install:
	@${MKDIR} ${PREFIX}/include/GL/
	cd ${WRKSRC}/src/glu; ${GMAKE} install
	${INSTALL_DATA} ${WRKSRC}/include/GL/glu*.h ${PREFIX}/include/GL/
	cd ${WRKSRC}/src/glu; ${GMAKE} install

.include "${.CURDIR}/../../graphics/libGL/bsd.mesalib.mk"

.include <bsd.port.pre.mk>

.if ${ARCH} != "x86_64" || ${ARCH} != "i386"
CONFIGURE_ARGS+=--disable-gallium-intel
.endif

.include <bsd.port.post.mk>
