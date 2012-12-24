# Created by: Rainer Hurling <rhurlin@gwdg.de>
# $FreeBSD: ports/archivers/laszip/Makefile,v 1.3 2012/12/18 08:04:12 svnexp Exp $

PORTNAME=	laszip
PORTVERSION=	2.1.0
CATEGORIES=	archivers
MASTER_SITES=	http://download.osgeo.org/laszip/

MAINTAINER=	rhurlin@gwdg.de
COMMENT=	Library for lossless LAS compression

LICENSE=	LGPL3

GNU_CONFIGURE=	yes
USE_CMAKE=	yes
USE_LDCONFIG=	yes

CMAKE_DEFS+=	-DCMAKE_USE_PTHREADS:BOOL=ON

post-install:
	@${LN} -s liblaszip.so.5.0.0 ${PREFIX}/lib/liblaszip.so.5

.include <bsd.port.mk>
