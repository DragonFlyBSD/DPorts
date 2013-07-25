# Created by: Oleg Pudeyev <oleg@bsdpower.com>
# $FreeBSD: www/py-frozen-flask/Makefile 323478 2013-07-22 16:47:52Z olivierd $

PORTNAME=	Frozen-Flask
PORTVERSION=	0.11
CATEGORIES=	www python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	oleg@bsdpower.com
COMMENT=	Freezes a Flask application into a set of static files

LICENSE=	BSD

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}Flask>=0:${PORTSDIR}/www/py-flask

USE_PYTHON=	2.6+
USE_PYDISTUTILS=	easy_install

.include <bsd.port.mk>
