# Created by: Cheng-Lung Sung <clsung@FreeBSD.org>
# $FreeBSD: www/py-django-piston/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	django-piston
PORTVERSION=	0.2.3
CATEGORIES=	www python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	clsung@FreeBSD.org
COMMENT=	Piston is a Django mini-framework creating APIs

RUN_DEPENDS=	${PYTHON_SITELIBDIR}/django/bin/django-admin.py:${PORTSDIR}/www/py-django

USE_PYTHON=	yes
USE_PYDISTUTILS=easy_install

NO_STAGE=	yes
.include <bsd.port.mk>
