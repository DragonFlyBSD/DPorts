# Created by: Eric Anholt <anholt@FreeBSD.org>
# $FreeBSD: graphics/libGLU/Makefile 327733 2013-09-20 18:35:44Z bapt $

PORTNAME=	libGLU
PORTVERSION=	9.0.0
CATEGORIES=	graphics
MASTER_SITES=	ftp://ftp.freedesktop.org/pub/mesa/glu/
DISTNAME=	glu-${PORTVERSION}

MAINTAINER=	x11@FreeBSD.org
COMMENT=	OpenGL utility library

USE_BZIP2=	yes
USES=		pathfix pkgconfig
USE_GL=		gl
GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--disable-static
USE_LDCONFIG=	yes

NO_STAGE=	yes
.include <bsd.port.mk>
