# Created by: Rainer Hurling <rhurlin@gwdg.de>
# $FreeBSD: archivers/laszip/Makefile 327699 2013-09-20 13:11:20Z bapt $

PORTNAME=	laszip
PORTVERSION=	2.1.0
CATEGORIES=	archivers
MASTER_SITES=	http://download.osgeo.org/laszip/

MAINTAINER=	rhurlin@gwdg.de
COMMENT=	Library for lossless LAS compression

LICENSE=	LGPL3

NO_STAGE=	yes
GNU_CONFIGURE=	yes
USES=		cmake
USE_LDCONFIG=	yes

CMAKE_DEFS+=	-DCMAKE_USE_PTHREADS:BOOL=ON

post-install:
	@${LN} -s liblaszip.so.5.0.0 ${PREFIX}/lib/liblaszip.so.5

.include <bsd.port.mk>
