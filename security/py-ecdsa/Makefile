# Created by: Neil Booth
# $FreeBSD: security/py-ecdsa/Makefile 327769 2013-09-20 22:55:24Z bapt $

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

NO_STAGE=	yes
.include <bsd.port.mk>
