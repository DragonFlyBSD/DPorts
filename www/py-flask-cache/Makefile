# New ports collection makefile for:	py-flask-cache
# Date created:				2011-04-13
# Whom:					Zhihao Yuan <lichray@gmail.com>
#
# $FreeBSD: ports/www/py-flask-cache/Makefile,v 1.4 2012/11/17 06:03:00 svnexp Exp $
#

PORTNAME=	Flask-Cache
PORTVERSION=	0.4.0
CATEGORIES=	www python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	lichray@gmail.com
COMMENT=	Cache support for your Flask application

LICENSE=	BSD

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}Flask>=0.8:${PORTSDIR}/www/py-flask

USE_PYTHON=	2.6+
USE_PYDISTUTILS=easy_install

.include <bsd.port.mk>
