PORTNAME=	qpageview
DISTVERSION=	1.0.5
CATEGORIES=	graphics python
MASTER_SITES=	https://github.com/frescobaldi/${PORTNAME}/releases/download/v${DISTVERSION}/
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	m.ne@gmx.net
COMMENT=	Page-based viewer widget for Qt6/PyQt6
WWW=		https://qpageview.org/

LICENSE=	GPLv3
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}hatchling>0:devel/py-hatchling@${PY_FLAVOR}

USES=		pyqt:6 python qt:6
USE_PYQT=	pyqt6
USE_PYTHON=	autoplist pep517

NO_ARCH=	yes

OPTIONS_DEFINE=	CUPS

CUPS_DESC=	Use print/py-pycups for printing

CUPS_RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}pycups>0:print/py-pycups@${PY_FLAVOR}

.include <bsd.port.mk>
