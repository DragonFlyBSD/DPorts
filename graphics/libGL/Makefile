# Created by: anholt@FreeBSD.org
# $FreeBSD: graphics/libGL/Makefile 313300 2013-03-02 21:32:51Z swills $

PORTNAME=	libGL
PORTVERSION=	${MESAVERSION}
PORTREVISION=	3
CATEGORIES=	graphics

COMMENT=	OpenGL library that renders using GLX or DRI

LIB_DEPENDS+=	drm:${PORTSDIR}/graphics/libdrm \
		expat.6:${PORTSDIR}/textproc/expat2

USE_PKGCONFIG=	build
USE_XORG=	glproto x11 xext xxf86vm xdamage xfixes dri2proto:both

SUB_FILES=	pkg-install pkg-deinstall

do-install:
	${RM} -f ${WRKSRC}/include/GL/glu*.h
	cd ${WRKSRC}/src/mesa; ${GMAKE} install-libgl

post-install:
	@PKG_PREFIX=${PREFIX} ${SH} ${PKGINSTALL} ${PKGNAME} POST-INSTALL

.include "${.CURDIR}/bsd.mesalib.mk"

.include <bsd.port.pre.mk>

.if !(${ARCH} == "x86_64" || ${ARCH} == "i386")
CONFIGURE_ARGS+=--disable-gallium-intel
.endif

.include <bsd.port.post.mk>
