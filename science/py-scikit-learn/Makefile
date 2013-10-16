# Created by: Dmitry Sivachenko <demon@FreeBSD.org>
# $FreeBSD: science/py-scikit-learn/Makefile 327767 2013-09-20 22:48:30Z bapt $

PORTNAME=	scikit-learn
PORTVERSION=	0.13.1
CATEGORIES=	science python
MASTER_SITES=	${MASTER_SITE_CHEESESHOP}
MASTER_SITE_SUBDIR=source/s/scikit-learn
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	demon@FreeBSD.org
COMMENT=	Machine learning algorithms for python

BUILD_DEPENDS=	${PYNUMPY}
LIB_DEPENDS=	cblas:${PORTSDIR}/math/cblas
RUN_DEPENDS=	${PYNUMPY} \
		${PYTHON_PKGNAMEPREFIX}scipy>0.8.0:${PORTSDIR}/science/py-scipy

USE_FORTRAN=	yes
LATEST_LINK=	py-${PORTNAME}

USE_PYTHON=	-2.7
USE_PYDISTUTILS=	yes

NO_STAGE=	yes
.include <bsd.port.mk>
