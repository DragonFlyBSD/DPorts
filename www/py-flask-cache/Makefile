# Created by: Zhihao Yuan <lichray@gmail.com>
# $FreeBSD: www/py-flask-cache/Makefile 340722 2014-01-22 17:00:46Z mat $

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

USE_PYTHON=		2
USE_PYDISTUTILS=	easy_install
PYDISTUTILS_PKGNAME=	Flask_Cache

NO_STAGE=	yes
.include <bsd.port.mk>
