PORTNAME=	fenics-basix
DISTVERSIONPREFIX=	v
DISTVERSION=	0.11.0
CATEGORIES=	math

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	FEniCS finite element basis evaluation library
WWW=		https://github.com/FEniCS/basix

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/../LICENSE

LIB_DEPENDS=	libopenblas.so:math/openblas

USES=		cmake compiler:c++20-lang

USE_GITHUB=	yes
GH_ACCOUNT=	FEniCS
GH_PROJECT=	basix

WRKSRC_SUBDIR=	cpp

USE_GCC_VERSION= ${GCC_DEFAULT}
.include <bsd.port.mk>
