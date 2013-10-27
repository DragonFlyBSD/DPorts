# Created by: trevor
# $FreeBSD: astro/rmap/Makefile 331586 2013-10-25 14:04:57Z vanilla $

PORTNAME=	rmap
PORTVERSION=	1.2
PORTREVISION=	12
CATEGORIES=	astro geography
MASTER_SITES=	http://www.reza.net/rmap/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Generates images of the Earth centered at a particular location

LIB_DEPENDS=	gd:${PORTSDIR}/graphics/gd

GNU_CONFIGURE=	yes
USES=		gmake

CPPFLAGS+=	-I${LOCALBASE}/include
CONFIGURE_ENV=	LIBS="-L${LOCALBASE}/lib"

.include <bsd.port.mk>
