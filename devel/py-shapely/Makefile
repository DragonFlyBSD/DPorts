# Created by: Wen Heping <wenheping@gmail.com>
# $FreeBSD: devel/py-shapely/Makefile 313803 2013-03-10 04:29:19Z wen $

PORTNAME=	Shapely
PORTVERSION=	1.2.17
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	wen@FreeBSD.org
COMMENT=	Python Package for Manipulation 2D Geospatial Geometry

LIB_DEPENDS=	geos_c:${PORTSDIR}/graphics/geos

CFLAGS+=	-I${LOCALBASE}/include
USE_PYTHON=	2.5+
USE_PYDISTUTILS=	easy_install

.include <bsd.port.mk>
