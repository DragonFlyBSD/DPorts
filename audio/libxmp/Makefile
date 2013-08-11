# Created by: Emanuel Haupt <ehaupt@FreeBSD.org>
# $FreeBSD: audio/libxmp/Makefile 323578 2013-07-24 08:19:07Z ehaupt $

PORTNAME=	libxmp
PORTVERSION=	4.1.5
CATEGORIES=	audio
MASTER_SITES=	SF/xmp/${PORTNAME}/${PORTVERSION}

MAINTAINER=	ehaupt@FreeBSD.org
COMMENT=	Module rendering library for xmp

USES=		gmake
GNU_CONFIGURE=	yes
USE_LDCONFIG=	yes

PLIST_FILES=	include/xmp.h lib/libxmp.so lib/libxmp.so.4 \
		lib/libxmp.so.${PORTVERSION} libdata/pkgconfig/libxmp.pc

.include <bsd.port.mk>
