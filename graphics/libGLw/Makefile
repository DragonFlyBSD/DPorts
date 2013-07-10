# Created by: Eric Anholt <anholt@FreeBSD.org>
# $FreeBSD: graphics/libGLw/Makefile 322621 2013-07-10 06:55:28Z bapt $

PORTNAME=	libGLw
PORTVERSION=	8.0.0
CATEGORIES=	graphics
MASTER_SITES=	ftp://ftp.freedesktop.org/pub/mesa/glw/
DISTNAME=	glw-${PORTVERSION}
DIST_SUBDIR=	GL

MAINTAINER=	x11@FreeBSD.org
COMMENT=	OpenGL widgets library

USE_BZIP2=	yes
USES=		pathfix pkgconfig motif
USE_LDCONFIG=	yes
USE_GL=		gl
USE_XORG=	x11 xt xext
GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--disable-static --enable-motif
CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

.include <bsd.port.mk>
