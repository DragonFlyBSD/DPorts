# Created by: William Grzybowski <william88@gmail.com>
# $FreeBSD: ports/www/py-django-tastypie/Makefile,v 1.4 2013/02/15 15:39:03 svnexp Exp $

PORTNAME=	django-tastypie
PORTVERSION=	0.9.12
CATEGORIES=	www python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	william88@gmail.com
COMMENT=	Create REST API for Django apps

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}mimeparse>=0:${PORTSDIR}/devel/py-mimeparse \
		${PYTHON_PKGNAMEPREFIX}dateutil>=1.5:${PORTSDIR}/devel/py-dateutil

USE_PYTHON=	2.6+
USE_PYDISTUTILS=	easy_install

.include <bsd.port.mk>
