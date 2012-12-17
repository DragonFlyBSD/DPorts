# New ports collection makefile for:	webp
# Date created:		1 October 2010
# Whom:			johans
#
# $FreeBSD: ports/graphics/webp/Makefile,v 1.12 2012/11/17 05:58:24 svnexp Exp $
#

PORTNAME=	webp
PORTVERSION=	0.1.3
PORTREVISION=	1
CATEGORIES=	graphics
MASTER_SITES=	GOOGLE_CODE
DISTNAME=	lib${PORTNAME}-${PORTVERSION}

MAINTAINER=	johans@FreeBSD.org
COMMENT=	Google WebP image format conversion tool

LIB_DEPENDS=	jpeg.11:${PORTSDIR}/graphics/jpeg \
		png15:${PORTSDIR}/graphics/png

USE_LDCONFIG=	yes
GNU_CONFIGURE=	yes
CONFIGURE_ARGS+=--with-pkgconfigdir=${PREFIX}/libdata/pkgconfig
CPPFLAGS+=	-I${LOCALBASE}/include -L${LOCALBASE}/lib

MAN1=		cwebp.1 dwebp.1

.include <bsd.port.mk>
