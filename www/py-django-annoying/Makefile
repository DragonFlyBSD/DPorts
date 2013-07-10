# Created by: Cheng-Lung Sung <clsung@FreeBSD.org>
# $FreeBSD: www/py-django-annoying/Makefile 321922 2013-06-28 02:10:18Z clsung $

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

.include <bsd.port.mk>
