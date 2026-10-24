PORTNAME=	edit-distance
PORTVERSION=	1.0.9
CATEGORIES=	math python
MASTER_SITES=	PYPI
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	edit_distance-${PORTVERSION}

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Computing edit distance on arbitrary Python sequences
WWW=		https://github.com/belambert/edit-distance

LICENSE=	APACHE20

BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}poetry-core>0:devel/py-poetry-core@${PY_FLAVOR}

USES=		python
USE_PYTHON=	autoplist concurrent pep517
NO_ARCH=	yes

.include <bsd.port.mk>
