# $FreeBSD$

PORTNAME=	eemeter
DISTVERSIONPREFIX=	v
DISTVERSION=	2.10.0
CATEGORIES=	misc python
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Package implementing methods to calculate metered energy consumption

LICENSE=	APACHE20
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}click>0:devel/py-click@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}pandas>0:math/py-pandas@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}scipy>0:science/py-scipy@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}statsmodels>0:math/py-statsmodels@${PY_FLAVOR}

USES=		python:3.6+
USE_GITHUB=	yes # PyPI doesn't have the latest version for some reason
GH_ACCOUNT=	openeemeter
USE_PYTHON=	distutils concurrent autoplist

.include <bsd.port.mk>
