# New ports collection makefile for:	py-django-extensions
# Date created:				19 May 2010
# Whom:					Kevin Golding <ports@caomhin.org>
#
# $FreeBSD: ports/www/py-django-extensions/Makefile,v 1.4 2012/11/17 06:02:59 svnexp Exp $
#

PORTNAME=	django-extensions
PORTVERSION=	0.8
CATEGORIES=	www python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	ports@caomhin.org
COMMENT=	Global custom management extensions for the Django Framework

RUN_DEPENDS=	${PYTHON_SITELIBDIR}/django/bin/django-admin.py:${PORTSDIR}/www/py-django

USE_PYTHON=	yes
USE_PYDISTUTILS=easy_install

.include <bsd.port.mk>
