# Created by: Dmitry Sivachenko <demon@FreeBSD.org>
# $FreeBSD: science/py-scikit-learn/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	scikit-learn
PORTVERSION=	0.14.1
CATEGORIES=	science python
MASTER_SITES=	${MASTER_SITE_CHEESESHOP}
MASTER_SITE_SUBDIR=source/s/scikit-learn
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	demon@FreeBSD.org
COMMENT=	Machine learning algorithms for python

BUILD_DEPENDS=	${PYNUMPY}
LIB_DEPENDS=	libcblas.so:${PORTSDIR}/math/cblas
RUN_DEPENDS=	${PYNUMPY} \
		${PYTHON_PKGNAMEPREFIX}scipy>0.8.0:${PORTSDIR}/science/py-scipy

USE_FORTRAN=	yes
LATEST_LINK=	py-${PORTNAME}

USE_PYTHON=	yes
USE_PYDISTUTILS=	yes
PYDISTUTILS_AUTOPLIST=	yes

NO_STAGE=	yes
.include <bsd.port.mk>
