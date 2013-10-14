# Created by: trasz <trasz@pin.if.uz.zgora.pl>
# $FreeBSD: graphics/openjpeg/Makefile 329949 2013-10-10 00:19:01Z madpilot $

PORTNAME=	openjpeg
PORTVERSION=	1.5.0
PORTREVISION=	2
CATEGORIES=	graphics
MASTER_SITES=	${MASTER_SITE_GOOGLE_CODE}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Open-source JPEG 2000 codec

LICENSE=	BSD
LICENSE_FILE=	${WRKSRC}/LICENSE

LIB_DEPENDS=	libtiff.so:${PORTSDIR}/graphics/tiff \
		libpng15.so:${PORTSDIR}/graphics/png \
		liblcms2.so:${PORTSDIR}/graphics/lcms2

USE_DOS2UNIX=	opj_malloc.h
GNU_CONFIGURE=	yes
USES=		cmake
USE_LDCONFIG=	yes

.include <bsd.port.mk>
