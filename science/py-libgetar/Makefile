PORTNAME=	libgetar
DISTVERSIONPREFIX=	v
DISTVERSION=	1.1.7
PORTREVISION=	2
CATEGORIES=	science # physics
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Library to read and write GEneric Trajectory ARchives
WWW=		https://github.com/glotzerlab/libgetar

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

PY_DEPENDS=	${PYTHON_PKGNAMEPREFIX}numpy>0:math/py-numpy@${PY_FLAVOR}
BUILD_DEPENDS=	${PY_DEPENDS}
RUN_DEPENDS=	${PY_DEPENDS}

USES=		python
USE_PYTHON=	distutils cython autoplist

USE_GITHUB=	yes
GH_ACCOUNT=	glotzerlab

TEST_ENV=	${MAKE_ENV} PYTHONPATH=${STAGEDIR}${PYTHONPREFIX_SITELIBDIR}

post-install:
	@${STRIP_CMD} ${STAGEDIR}${PYTHON_SITELIBDIR}/gtar/_gtar${PYTHON_TAG}.so

do-test:
	@cd ${WRKSRC}/test && ${SETENV} ${TEST_ENV} ${PYTHON_CMD} -m unittest discover

# tests as of 1.1.7: Ran 28 tests in 0.065s, OK (skipped=1)

.include <bsd.port.mk>
