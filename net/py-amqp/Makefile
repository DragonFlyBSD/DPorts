# Created by: Kubilay Kocak <koobs@FreeBSD.org>
# $FreeBSD: net/py-amqp/Makefile 340391 2014-01-20 13:20:08Z wg $

PORTNAME=	amqp
PORTVERSION=	1.4.1
CATEGORIES=	net python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	wg@FreeBSD.org
COMMENT=	Low-level AMQP client for Python (fork of amqplib)

TEST_DEPENDS=	${PYTHON_PKGNAMEPREFIX}unittest2>=0.4.0:${PORTSDIR}/devel/py-unittest2 \
		${PYTHON_PKGNAMEPREFIX}nose>0:${PORTSDIR}/devel/py-nose \
		${PYTHON_PKGNAMEPREFIX}coverage>0:${PORTSDIR}/devel/py-coverage \
		${PYTHON_PKGNAMEPREFIX}mock>0:${PORTSDIR}/devel/py-mock

LICENSE=	LGPL21

USE_PYTHON=		yes
USE_PYDISTUTILS=	yes
PYDISTUTILS_AUTOPLIST=	yes

regression-test: build
	@cd ${WRKSRC}/funtests && ${SETENV} PYTHONPATH=../ ${PYTHON_CMD} run_all.py

.include <bsd.port.mk>
