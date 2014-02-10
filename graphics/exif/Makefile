# Created by: Pav Lucistnik <pav@FreeBSD.org>
# $FreeBSD: head/graphics/exif/Makefile 331616 2013-10-25 17:10:07Z sunpoet $

PORTNAME=	exif
PORTVERSION=	0.6.21
CATEGORIES=	graphics
MASTER_SITES=	SF/lib${PORTNAME}/${PORTNAME}/${PORTVERSION}

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Command line utility to read and manipulate EXIF data

LICENSE=	LGPL21

LIB_DEPENDS=	libexif.so:${PORTSDIR}/graphics/libexif \
		libpopt.so:${PORTSDIR}/devel/popt

OPTIONS_DEFINE=	NLS
OPTIONS_SUB=	yes

CONFIGURE_ENV=	POPT_CFLAGS=-I${LOCALBASE}/include POPT_LIBS="-L${LOCALBASE}/lib -lpopt"
GNU_CONFIGURE=	yes
USES=		gmake pkgconfig

NLS_CONFIGURE_ON=	--enable-nls ${ICONV_CONFIGURE_ARG}
NLS_CONFIGURE_OFF=	--disable-nls --without-libiconv-prefix
NLS_USES=		gettext iconv

.include <bsd.port.mk>
