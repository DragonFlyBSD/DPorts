# Created by: Oleg Pudeyev <oleg@bsdpower.com>
# $FreeBSD: ports/www/py-frozen-flask/Makefile,v 1.1 2013/02/18 02:54:44 svnexp Exp $

PORTNAME=	Frozen-Flask
PORTVERSION=	0.9
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
