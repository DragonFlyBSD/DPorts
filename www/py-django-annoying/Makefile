# Created by: Cheng-Lung Sung <clsung@FreeBSD.org>
# $FreeBSD: www/py-django-annoying/Makefile 327776 2013-09-20 23:36:50Z bapt $

PORTNAME=	django-annoying
PORTVERSION=	0.7.7
CATEGORIES=	www python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	clsung@FreeBSD.org
COMMENT=	Application to eliminate annoying things in the Django framework

RUN_DEPENDS=	${PYTHON_SITELIBDIR}/django/bin/django-admin.py:${PORTSDIR}/www/py-django

USE_PYTHON=	yes
USE_PYDISTUTILS=	easy_install

PLIST_FILES=	%%PYTHON_SITELIBDIR%%/%%PYEASYINSTALL_EGG%%

NO_STAGE=	yes
.include <bsd.port.mk>
