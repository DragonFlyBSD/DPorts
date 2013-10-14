# Created by: Gea-Suan Lin <gslin@gslin.org>
# $FreeBSD: net/py-eventlet/Makefile 327840 2013-09-21 20:20:08Z cs $

PORTNAME=	eventlet
PORTVERSION=	0.14.0
CATEGORIES=	net python
MASTER_SITES=	CHEESESHOP \
		http://www.c-s.li/ports/
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	cs@FreeBSD.org
COMMENT=	Concurrent networking library for Python

LICENSE=	MIT

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}greenlet>=0.3:${PORTSDIR}/devel/py-greenlet
TEST_DEPENDS=	${PYTHON_PKGNAMEPREFIX}nose>0:${PORTSDIR}/devel/py-nose

USE_PYTHON=		yes
USE_PYDISTUTILS=	easy_install

regression-test: build
	@cd ${WRKSRC} && ${PYTHON_CMD} ${PYSETUP} test

NO_STAGE=	yes
.include <bsd.port.mk>
