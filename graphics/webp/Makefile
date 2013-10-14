# Created by: johans
# $FreeBSD: graphics/webp/Makefile 329602 2013-10-06 16:43:13Z johans $

PORTNAME=	webp
PORTVERSION=	0.3.1
PORTREVISION=	1
CATEGORIES=	graphics
MASTER_SITES=	GOOGLE_CODE
DISTNAME=	lib${PORTNAME}-${PORTVERSION}

MAINTAINER=	johans@FreeBSD.org
COMMENT=	Google WebP image format conversion tool

LIB_DEPENDS=	libjpeg.so:${PORTSDIR}/graphics/jpeg \
		libpng15.so:${PORTSDIR}/graphics/png \
		libgif.so:${PORTSDIR}/graphics/giflib \
		libtiff.so:${PORTSDIR}/graphics/tiff

USE_LDCONFIG=	yes
GNU_CONFIGURE=	yes
CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib
CONFIGURE_ARGS+=--with-pkgconfigdir=${PREFIX}/libdata/pkgconfig \
		--enable-libwebpmux \
		--enable-libwebpdemux  \
		--enable-libwebpdecoder

.include <bsd.port.mk>
