# New ports collection makefile for:	py-django-registration
# Date created:				22 November 2009
# Whom:					Kevin Golding <ports@caomhin.org>
#
# $FreeBSD: www/py-django-registration/Makefile 316464 2013-04-24 18:10:30Z ak $
#

PORTNAME=	django-registration
PORTVERSION=	0.8
CATEGORIES=	www python
MASTER_SITES=	http://www.caomhin.org/ports/
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	ports@caomhin.org
COMMENT=	A user-registration application for Django

LICENSE=	BSD

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}django>=1.3:${PORTSDIR}/www/py-django

USE_PYTHON=	yes
USE_PYDISTUTILS=	yes
USES=		gettext

CONFLICTS_INSTALL=	pootle-*

.include <bsd.port.mk>
