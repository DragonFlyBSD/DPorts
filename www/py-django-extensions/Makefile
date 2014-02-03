# Created by: Kevin Golding <ports@caomhin.org>
# $FreeBSD: www/py-django-extensions/Makefile 341751 2014-01-29 15:39:37Z miwi $

PORTNAME=	django-extensions
PORTVERSION=	1.2.0
PORTREVISION=	1
CATEGORIES=	www python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	ports@caomhin.org
COMMENT=	Global custom management extensions for the Django Framework

LICENSE=	BSD

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}django>0:${PORTSDIR}/www/py-django \
		${PYTHON_PKGNAMEPREFIX}six>0:${PORTSDIR}/devel/py-six

USE_PYTHON=	2
USE_PYDISTUTILS=yes
PYDISTUTILS_AUTOPLIST=	yes

.include <bsd.port.mk>
