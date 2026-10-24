PORTNAME=	smolagents-agentfolio
PORTVERSION=	0.1.0
CATEGORIES=	misc python
MASTER_SITES=	PYPI
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	${PORTNAME:S/-/_/}-${PORTVERSION}

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	AgentFolio identity, trust & reputation tools for smolagents
WWW=		https://agentfolio.bot \
		https://github.com/0xbrainkid/smolagents-agentfolio

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/README.md

BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}setuptools>=0:devel/py-setuptools@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}wheel>=0:devel/py-wheel@${PY_FLAVOR}
RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}requests>=2.28.0:www/py-requests@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}smolagents>=1.0.0:misc/py-smolagents@${PY_FLAVOR}

USES=		python
USE_PYTHON=	autoplist concurrent pep517

NO_ARCH=	yes

.include <bsd.port.mk>
