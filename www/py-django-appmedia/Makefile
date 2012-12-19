# New ports collection makefile for:	py-django-appmedia
# Date created:		2011-02-15
# Whom:			Kurt Lidl <kurt.lidl@cello.com>
#
# $FreeBSD: ports/www/py-django-appmedia/Makefile,v 1.2 2012/11/17 06:02:59 svnexp Exp $
#

PORTNAME=	django-appmedia
PORTVERSION=	1.0.1
CATEGORIES=	www python
MASTER_SITES=	${MASTER_SITE_CHEESESHOP}
MASTER_SITE_SUBDIR=	source/d/${PORTNAME}
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	kurt.lidl@cello.com
COMMENT=	Serve static content from within django app directories

RUN_DEPENDS=	${PYTHON_SITELIBDIR}/django/bin/django-admin.py:${PORTSDIR}/www/py-django

USE_PYTHON=	yes
USE_PYDISTUTILS=	easy_install

.include <bsd.port.mk>
