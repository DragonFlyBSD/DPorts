# Created by: Grzegorz Blach <gblach@FreeBSD.org>
# $FreeBSD: graphics/enesim/Makefile 325928 2013-09-01 22:50:06Z bapt $

PORTNAME=	enesim
PORTVERSION=	20121003
CATEGORIES=	graphics enlightenment
MASTER_SITES=	http://files.roorback.net/e17/extra/

MAINTAINER=	gblach@FreeBSD.org
COMMENT=	Rendering library focused on flexibility and extensibility

LICENSE=	LGPL21

DIST_SUBDIR=	e17
USE_BZIP2=	yes
GNU_CONFIGURE=	yes
USE_EFL=	eina libtool_hack
USES=		pathfix pkgconfig
USE_LDCONFIG=	yes

CONFIGURE_ARGS=	--disable-static

.include <bsd.port.mk>
