# Created by: Kubilay Kocak <koobs@FreeBSD.org>
# $FreeBSD: head/devel/py-iso8601/Makefile 472884 2018-06-20 17:05:41Z mat $

PORTNAME=	iso8601
PORTVERSION=	0.1.11
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	koobs@FreeBSD.org
COMMENT=	Simple module to parse ISO 8601 dates

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

TEST_DEPENDS=	${PYTHON_PKGNAMEPREFIX}pytest>=2.4.2:devel/py-pytest@${PY_FLAVOR}

USES=		python
USE_PYTHON=	distutils autoplist

NO_ARCH=	yes

do-test:
	@cd ${WRKSRC} && ${PYTHON_CMD} -m pytest iso8601

.include <bsd.port.mk>
