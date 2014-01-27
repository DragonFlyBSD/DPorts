# Created by: Wen Heping <wenheping@gmail.com>
# $FreeBSD: devel/spatialindex/Makefile 340963 2014-01-25 00:25:54Z bapt $

PORTNAME=	spatialindex
PORTVERSION=	1.8.0
CATEGORIES=	devel
MASTER_SITES=	http://download.osgeo.org/libspatialindex/
DISTNAME=	${PORTNAME}-src-${PORTVERSION}

MAINTAINER=	wen@FreeBSD.org
COMMENT=	General Framework for Developing Spatial Indices

USES=		gmake pathfix
USE_AUTOTOOLS=	libtool:env
USE_BZIP2=	yes
GNU_CONFIGURE=	yes
USE_LDCONFIG=	yes

.include <bsd.port.mk>
