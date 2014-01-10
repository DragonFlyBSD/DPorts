# Created by: johans
# $FreeBSD: graphics/libdmtx/Makefile 337995 2013-12-29 14:43:07Z johans $

PORTNAME=	libdmtx
PORTVERSION=	0.7.4
PORTREVISION=	3
CATEGORIES=	graphics
MASTER_SITES=	SF

MAINTAINER=	johans@FreeBSD.org
COMMENT=	Library for reading and writing Data Matrix barcodes

LIB_DEPENDS=	libMagickWand.so:${PORTSDIR}/graphics/ImageMagick

USE_BZIP2=	yes
USE_LDCONFIG=	yes
GNU_CONFIGURE=	yes

post-patch:
	@${REINPLACE_CMD} -e '/^pkgconfigdir /s:(libdir):{prefix}/libdata:' \
		${WRKSRC}/Makefile.in

.include <bsd.port.mk>
