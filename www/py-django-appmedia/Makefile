# Created by: Kurt Lidl <kurt.lidl@cello.com>
# $FreeBSD: www/py-django-appmedia/Makefile 341750 2014-01-29 15:27:52Z miwi $

PORTNAME=	django-appmedia
PORTVERSION=	1.0.1
PORTREVISION=	1
CATEGORIES=	www python
MASTER_SITES=	${MASTER_SITE_CHEESESHOP}
MASTER_SITE_SUBDIR=	source/d/${PORTNAME}
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	kurt.lidl@cello.com
COMMENT=	Serve static content from within django app directories

RUN_DEPENDS=	${PYTHON_SITELIBDIR}/django/bin/django-admin.py:${PORTSDIR}/www/py-django

USE_PYTHON=	yes
USE_PYDISTUTILS=	yes
PYDISTUTILS_AUTOPLIST=	yes

.include <bsd.port.mk>
