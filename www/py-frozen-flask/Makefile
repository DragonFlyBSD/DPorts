# Created by: Oleg Pudeyev <oleg@bsdpower.com>
# $FreeBSD: www/py-frozen-flask/Makefile 339634 2014-01-13 21:00:02Z rene $

PORTNAME=	Frozen-Flask
PORTVERSION=	0.11
CATEGORIES=	www python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	oleg@bsdpower.com
COMMENT=	Freezes a Flask application into a set of static files

LICENSE=	BSD

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}Flask>=0:${PORTSDIR}/www/py-flask

USE_PYTHON=	yes
USE_PYDISTUTILS=	easy_install

NO_STAGE=	yes
.include <bsd.port.mk>
