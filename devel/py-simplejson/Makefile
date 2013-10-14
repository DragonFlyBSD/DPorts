# Created by: Alexander Botero-Lowry <alex@foxybanana.com>
# $FreeBSD: devel/py-simplejson/Makefile 329614 2013-10-06 18:28:48Z sunpoet $

PORTNAME=	simplejson
PORTVERSION=	3.3.1
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	python@FreeBSD.org
COMMENT=	Simple, fast, extensible JSON encoder/decoder

LICENSE=	MIT

USE_PYTHON=	yes
USE_PYDISTUTILS=yes

regression-test test: build
	cd ${WRKSRC}/ && ${PYTHON_CMD} ${PYSETUP} test

.include <bsd.port.mk>
