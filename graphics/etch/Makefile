# Created by: Grzegorz Blach <gblach@FreeBSD.org>
# $FreeBSD: graphics/etch/Makefile 325928 2013-09-01 22:50:06Z bapt $

PORTNAME=	etch
PORTVERSION=	20121003
CATEGORIES=	graphics enlightenment
MASTER_SITES=	http://files.roorback.net/e17/extra/

MAINTAINER=	gblach@FreeBSD.org
COMMENT=	Etch is an abstract time based animation library

LICENSE=	LGPL21

DIST_SUBDIR=	e17
USE_BZIP2=	yes
GNU_CONFIGURE=	yes
USE_EFL=	eina enesim libtool_hack
USES=		pathfix pkgconfig
USE_LDCONFIG=	yes

CONFIGURE_ARGS=	--disable-static

.include <bsd.port.mk>
