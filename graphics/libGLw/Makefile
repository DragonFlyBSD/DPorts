# Created by: Eric Anholt <anholt@FreeBSD.org>
# $FreeBSD: graphics/libGLw/Makefile 319055 2013-05-25 14:37:02Z zeising $

PORTNAME=	libGLw
PORTVERSION=	8.0.0
CATEGORIES=	graphics
MASTER_SITES=	ftp://ftp.freedesktop.org/pub/mesa/glw/
DISTNAME=	glw-${PORTVERSION}
DIST_SUBDIR=	GL

MAINTAINER=	x11@FreeBSD.org
COMMENT=	OpenGL widgets library

USE_BZIP2=	yes
USES=		pathfix pkgconfig
USE_LDCONFIG=	yes
USE_GL=		gl
USE_MOTIF=	yes
USE_XORG=	x11 xt xext
GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--disable-static --enable-motif
CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

.include <bsd.port.mk>
