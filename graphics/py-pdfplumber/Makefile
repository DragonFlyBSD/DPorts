PORTNAME=	pdfplumber
PORTVERSION=	0.11.10
CATEGORIES=	graphics python
MASTER_SITES=	PYPI
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Plumb a PDF for detailed information about each char, rectangle, line
WWW=		https://github.com/jsvine/pdfplumber

LICENSE=	MIT

BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}setuptools>=0:devel/py-setuptools@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}wheel>=0:devel/py-wheel@${PY_FLAVOR}
RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}pdfminer-six>0:graphics/py-pdfminer-six@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}pillow>0:graphics/py-pillow@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}pypdfium2>0:graphics/py-pypdfium2@${PY_FLAVOR}

USES=		python
USE_PYTHON=	autoplist concurrent pep517
NO_ARCH=	yes

post-extract:
	@${REINPLACE_CMD} -e 's/Pillow>=12\.2\.0/Pillow>=0/' \
		-e 's/pypdfium2>=5\.9\.0/pypdfium2>=0/' \
		${WRKSRC}/setup.cfg ${WRKSRC}/requirements.txt

.include <bsd.port.mk>
