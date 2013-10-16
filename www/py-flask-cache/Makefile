# Created by: Zhihao Yuan <lichray@gmail.com>
# $FreeBSD: www/py-flask-cache/Makefile 327776 2013-09-20 23:36:50Z bapt $

PORTNAME=	Flask-Cache
PORTVERSION=	0.9.2
PORTREVISION=	1
CATEGORIES=	www python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	lichray@gmail.com
COMMENT=	Cache support for your Flask application

LICENSE=	BSD

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}Flask>=0.8:${PORTSDIR}/www/py-flask

USE_PYTHON=		-2.7
USE_PYDISTUTILS=	easy_install
PYDISTUTILS_PKGNAME=	Flask_Cache

NO_STAGE=	yes
.include <bsd.port.mk>
