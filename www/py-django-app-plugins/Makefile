# Created by: Kevin Golding <ports@caomhin.org>
# $FreeBSD: www/py-django-app-plugins/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	django-app-plugins
PORTVERSION=	0.1.1
CATEGORIES=	www python
MASTER_SITES=	${MASTER_SITE_GOOGLE_CODE}
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	ports@caomhin.org
COMMENT=	Reusable django application for writing pluggable reusable django applications

RUN_DEPENDS=	${PYTHON_SITELIBDIR}/django/bin/django-admin.py:${PORTSDIR}/www/py-django

USE_PYTHON=	yes
USE_PYDISTUTILS=	easy_install

NO_STAGE=	yes
.include <bsd.port.mk>
