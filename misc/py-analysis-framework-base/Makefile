PORTNAME=	analysis-framework-base
PORTVERSION=	1.0.0
CATEGORIES=	misc python
MASTER_SITES=	PYPI
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	analysis_framework_base-${PORTVERSION}

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Base interfaces and models for document analysis frameworks
WWW=		https://github.com/rdwj/docling-analysis-framework # maybe? the URL listed on PyPI is invalid

LICENSE=	MIT

BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}setuptools>0:devel/py-setuptools@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}wheel>0:devel/py-wheel@${PY_FLAVOR}

USES=		python
USE_PYTHON=	autoplist concurrent pep517
NO_ARCH=	yes

post-extract:
	@${REINPLACE_CMD} -e 's/^license = "\([^"]*\)"/license = {text = "\1"}/' -e '/^license-files/d' ${WRKSRC}/pyproject.toml

.include <bsd.port.mk>
