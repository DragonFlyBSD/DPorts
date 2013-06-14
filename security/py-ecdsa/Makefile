# Created by: Neil Booth
# $FreeBSD: security/py-ecdsa/Makefile 320621 2013-06-11 18:25:17Z rm $

PORTNAME=	ecdsa
PORTVERSION=	0.8
CATEGORIES=	security python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	kyuupichan@gmail.com
COMMENT=	ECDSA cryptographic signature library (pure python)

LICENSE=	MIT

USE_PYTHON=	-2.7
USE_PYDISTUTILS=	yes

regression-test: build
	@cd ${WRKSRC} && ${PYTHON_CMD} ${PYSETUP} test

.include <bsd.port.mk>
