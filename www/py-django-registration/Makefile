# Created by: Kevin Golding <ports@caomhin.org>
# $FreeBSD: www/py-django-registration/Makefile 326280 2013-09-04 14:35:08Z wg $

PORTNAME=	django-registration
PORTVERSION=	1.0
CATEGORIES=	www python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	ports@caomhin.org
COMMENT=	User-registration application for Django

LICENSE=	BSD

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}django>=1.4:${PORTSDIR}/www/py-django

USE_PYTHON=	yes
USE_PYDISTUTILS=	yes
USES=		gettext

CONFLICTS_INSTALL=	pootle-*

.include <bsd.port.mk>
