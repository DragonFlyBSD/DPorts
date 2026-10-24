PORTNAME=	triangle
DISTVERSIONPREFIX=	v
DISTVERSION=	20230923
PORTREVISION=	1
CATEGORIES=	math
MASTER_SITES=	PYPI
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	db@FreeBSD.org
COMMENT=	Python interface to triangle
WWW=		https://rufat.be/triangle

LICENSE=	LGPL3
LICENSE_FILE=	${WRKSRC}/LICENSE

USES=		compiler:c++11-lang python

USE_GITHUB=	yes
GH_ACCOUNT=	drufat
GH_TUPLE=	drufat:triangle-c:8b9e104:triangle/c
USE_PYTHON=	distutils autoplist

BUILD_DEPENDS=	triangle>0:math/triangle

post-install:
	${STRIP_CMD} ${STAGEDIR}${PYTHON_SITELIBDIR}/triangle/core*.so

dfly-patch:
	${REINPLACE_CMD} -e 's|^#include "triangle.h"$$|#include "../c/triangle.h"|' \
		${WRKSRC}/triangle/core.c
	${REINPLACE_CMD} -e 's|^cdef extern from "triangle.h":$$|cdef extern from "../c/triangle.h":|' \
		${WRKSRC}/triangle/core.pyx

.include <bsd.port.mk>
