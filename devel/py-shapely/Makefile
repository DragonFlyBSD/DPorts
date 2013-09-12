# Created by: Wen Heping <wenheping@gmail.com>
# $FreeBSD: devel/py-shapely/Makefile 326981 2013-09-11 13:58:27Z wg $

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

.include <bsd.port.mk>
