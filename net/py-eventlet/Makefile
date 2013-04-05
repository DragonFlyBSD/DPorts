# Created by: Gea-Suan Lin <gslin@gslin.org>
# $FreeBSD: net/py-eventlet/Makefile 315325 2013-03-26 20:36:41Z cs $
#

PORTNAME=	eventlet
PORTVERSION=	0.12.1
CATEGORIES=	net python
MASTER_SITES=	CHEESESHOP \
		http://www.c-s.li/ports/
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	cs@FreeBSD.org
COMMENT=	Concurrent networking library for Python

LICENSE=	MIT

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}greenlet>=0:${PORTSDIR}/devel/py-greenlet

USE_PYTHON=	yes
USE_PYDISTUTILS=	easy_install

.include <bsd.port.mk>
