# Created by: Grzegorz Blach <gblach@FreeBSD.org>
# $FreeBSD: graphics/enesim/Makefile 328226 2013-09-25 00:54:08Z bdrewery $

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
