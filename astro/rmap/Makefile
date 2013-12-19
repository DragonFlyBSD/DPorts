# Created by: trevor
# $FreeBSD: astro/rmap/Makefile 336154 2013-12-11 10:31:41Z bapt $

PORTNAME=	rmap
PORTVERSION=	1.2
PORTREVISION=	12
CATEGORIES=	astro geography
MASTER_SITES=	http://www.reza.net/rmap/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Generates images of the Earth centered at a particular location

LIB_DEPENDS=	libgd.so:${PORTSDIR}/graphics/gd

GNU_CONFIGURE=	yes
USES=		gmake

CPPFLAGS+=	-I${LOCALBASE}/include
CONFIGURE_ENV=	LIBS="-L${LOCALBASE}/lib"

.include <bsd.port.mk>
