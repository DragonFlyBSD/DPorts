# Created by: Emanuel Haupt <ehaupt@critical.ch>
# $FreeBSD: graphics/exrtools/Makefile 336836 2013-12-18 14:35:53Z ehaupt $

PORTNAME=	exrtools
PORTVERSION=	0.4
PORTREVISION=	9
CATEGORIES=	graphics
MASTER_SITES=	http://scanline.ca/exrtools/ \
		CRITICAL

MAINTAINER=	ehaupt@FreeBSD.org
COMMENT=	Utilities for manipulating with HDR images in OpenEXR format

LICENSE=	GPLv2

LIB_DEPENDS=	libIlmImf.so:${PORTSDIR}/graphics/OpenEXR \
		libpng15.so:${PORTSDIR}/graphics/png \
		libjpeg.so:${PORTSDIR}/graphics/jpeg

GNU_CONFIGURE=	yes
USES=		pkgconfig gmake

CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

post-patch:
	@${REINPLACE_CMD} -e 's|<values\.h>|<float.h>|' \
		${WRKSRC}/src/exrnormalize.c \
		${WRKSRC}/src/exrpptm.c \
		${WRKSRC}/src/exrstats.c

.include <bsd.port.mk>
