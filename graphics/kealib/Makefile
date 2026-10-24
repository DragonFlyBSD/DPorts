PORTNAME=	kealib
PORTVERSION=	2.0.0
CATEGORIES=	graphics
MASTER_SITES=	https://github.com/ubarsc/kealib/releases/download/kealib-${PORTVERSION}/

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	HDF5 Based Raster File Format
WWW=		https://kealib.org/ \
		https://github.com/ubarsc/kealib

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

BUILD_DEPENDS=	highfive>=0:science/highfive
RUN_DEPENDS=	highfive>=0:science/highfive

USES=		cmake compiler:c++14-lang

CMAKE_OFF=	HDF5_PREFER_PARALLEL \
		HDF5_USE_STATIC_LIBRARIES \
		LIBKEA_WITH_GDAL
CMAKE_ON=	BUILD_SHARED_LIBS

PLIST_SUB=	PORTVERSION=${PORTVERSION}

.include <bsd.port.mk>
