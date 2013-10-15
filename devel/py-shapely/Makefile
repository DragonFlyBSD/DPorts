# Created by: Wen Heping <wenheping@gmail.com>
# $FreeBSD: devel/py-shapely/Makefile 327724 2013-09-20 17:13:42Z bapt $

PORTNAME=	Shapely
PORTVERSION=	1.2.18
PORTREVISION=	1
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	wen@FreeBSD.org
COMMENT=	Python Package for Manipulation 2D Geospatial Geometry

LIB_DEPENDS=	geos_c:${PORTSDIR}/graphics/geos

CFLAGS+=	-I${LOCALBASE}/include
USE_PYTHON=	2.6+
USE_PYDISTUTILS=	easy_install

NO_STAGE=	yes
.include <bsd.port.mk>
