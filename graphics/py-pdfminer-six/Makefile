PORTNAME=	pdfminer-six
PORTVERSION=	20260107
PORTREVISION=	1
CATEGORIES=	graphics python
MASTER_SITES=	PYPI
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	pdfminer_six-${PORTVERSION}

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	PDF parser and analyzer
WWW=		https://github.com/pdfminer/pdfminer.six

LICENSE=	MIT

BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}setuptools>=0:devel/py-setuptools@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}setuptools-scm>=8:devel/py-setuptools-scm@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}wheel>=0:devel/py-wheel@${PY_FLAVOR}
RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}charset-normalizer>=2.0.0:textproc/py-charset-normalizer@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}cryptography>=36.0.0:security/py-cryptography@${PY_FLAVOR}

USES=		python
USE_PYTHON=	autoplist concurrent pep517
NO_ARCH=	yes

post-extract:
	@${REINPLACE_CMD} -e 's/^license = "\([^"]*\)"/license = {text = "\1"}/' \
		-e '/^license-files/d' \
		-e 's/^name = "pdfminer\.six"/name = "pdfminer_six"/' ${WRKSRC}/pyproject.toml

.include <bsd.port.mk>
