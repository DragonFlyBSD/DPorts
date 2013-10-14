# Created by: Alexander Botero-Lowry <alex@foxybanana.com>
# $FreeBSD: devel/py-pyflakes/Makefile 327724 2013-09-20 17:13:42Z bapt $

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

NO_STAGE=	yes
.include <bsd.port.mk>
