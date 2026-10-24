PORTNAME=	ibm-cos-sdk
PORTVERSION=	2.16.2
CATEGORIES=	misc python
MASTER_SITES=	PYPI
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	ibm_cos_sdk-${PORTVERSION}

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	IBM SDK for Python
WWW=		https://github.com/ibm/ibm-cos-sdk-python

LICENSE=	APACHE20

BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}setuptools>0:devel/py-setuptools@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}wheel>0:devel/py-wheel@${PY_FLAVOR}
RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}ibm-cos-sdk-core>0:misc/py-ibm-cos-sdk-core@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}ibm-cos-sdk-s3transfer>0:misc/py-ibm-cos-sdk-s3transfer@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}jmespath>=0.10.0:devel/py-jmespath@${PY_FLAVOR}

USES=		python
USE_PYTHON=	autoplist concurrent pep517
NO_ARCH=	yes

.include <bsd.port.mk>
