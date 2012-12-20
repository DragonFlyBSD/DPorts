# New ports collection makefile for:	py-django-caching-app-plugins
# Date created:				12 January 2012
# Whom:					Kevin Golding <ports@caomhin.org>
#
# $FreeBSD: ports/www/py-django-caching-app-plugins/Makefile,v 1.4 2012/11/17 06:02:59 svnexp Exp $
#

PORTNAME=	django-caching-app-plugins
PORTVERSION=	0.1.3
PORTREVISION=	1
CATEGORIES=	www python
MASTER_SITES=	http://www.caomhin.org/ports/
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	ports@caomhin.org
COMMENT=	Django app for writing pluggable reusable django applications

LICENSE=	BSD

BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}setuptools_hg>=0.4:${PORTSDIR}/devel/py-setuptools_hg
RUN_DEPENDS=	${PYTHON_SITELIBDIR}/django/bin/django-admin.py:${PORTSDIR}/www/py-django

WRKSRC=		${WRKDIR}/bkroeze-django-caching-app-plugins-tip
USE_PYTHON=	yes
USE_PYDISTUTILS=	easy_install

.include <bsd.port.mk>
