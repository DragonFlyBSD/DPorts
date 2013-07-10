# Created by: Alexander Botero-Lowry <alex@foxybanana.com>
# $FreeBSD: devel/py-pyflakes/Makefile 322421 2013-07-07 08:03:20Z koobs $

PORTNAME=	pyflakes
PORTVERSION=	0.7.3
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	koobs@FreeBSD.org
COMMENT=	Program to analyze Python programs and detect various errors

LICENSE=	MIT

USE_PYTHON=		yes
USE_PYDISTUTILS=	easy_install

regression-test: build
	@cd ${WRKSRC} && ${PYTHON_CMD} ${PYSETUP} test

.include <bsd.port.mk>
