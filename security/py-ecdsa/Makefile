# Created by: Neil Booth
# $FreeBSD: security/py-ecdsa/Makefile 339634 2014-01-13 21:00:02Z rene $

PORTNAME=	ecdsa
PORTVERSION=	0.8
CATEGORIES=	security python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	kyuupichan@gmail.com
COMMENT=	ECDSA cryptographic signature library (pure python)

LICENSE=	MIT

USE_PYTHON=	2
USE_PYDISTUTILS=	yes

regression-test: build
	@cd ${WRKSRC} && ${PYTHON_CMD} ${PYSETUP} test

NO_STAGE=	yes
.include <bsd.port.mk>
