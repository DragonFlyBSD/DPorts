# Created by: wenheping@gmail.com
# $FreeBSD: devel/py-rtree/Makefile 327724 2013-09-20 17:13:42Z bapt $

PORTNAME=	rtree
PORTVERSION=	0.7.0
PORTREVISION=	1
CATEGORIES=	devel science python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	Rtree-${PORTVERSION}

MAINTAINER=	wen@FreeBSD.org
COMMENT=	R-Tree Spatial Index For Python GIS

BUILD_DEPENDS+=	${LOCALBASE}/include/spatialindex/SpatialIndex.h:${PORTSDIR}/devel/spatialindex
RUN_DEPENDS+=	${BUILD_DEPENDS}

USE_PYTHON=		2.5+
USE_PYDISTUTILS=	easy_install
PYDISTUTILS_PKGNAME=	Rtree
PYDISTUTILS_NOEGGINFO=	yes
WRKSRC=			${WRKDIR}/${DISTNAME}

NO_STAGE=	yes
post-extract:
	${REINPLACE_CMD} -e 's#/usr/local#${LOCALBASE}#g' \
		${WRKSRC}/setup.cfg

.include <bsd.port.mk>
