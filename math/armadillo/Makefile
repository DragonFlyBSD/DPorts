# $FreeBSD: math/armadillo/Makefile 336260 2013-12-12 13:01:40Z bapt $

PORTNAME=	armadillo
PORTVERSION=	3.800.1
PORTREVISION=	1
CATEGORIES=	math
MASTER_SITES=	SF/arma/

MAINTAINER=	giffunip@tutopia.com
COMMENT=	C++ linear algebra library

LICENSE=	MPL

LIB_DEPENDS=	liblapack.so:${PORTSDIR}/math/lapack	\
		libboost_date_time.so:${PORTSDIR}/devel/boost-libs

USES=		cmake
USE_LDCONFIG=	yes

NO_STAGE=	yes
.include <bsd.port.mk>
