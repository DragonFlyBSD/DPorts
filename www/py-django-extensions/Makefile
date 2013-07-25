# Created by: Kevin Golding <ports@caomhin.org>
# $FreeBSD: www/py-django-extensions/Makefile 323434 2013-07-22 07:10:08Z rm $

PORTNAME=	django-extensions
PORTVERSION=	1.1.1
PORTREVISION=	1
CATEGORIES=	www python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	ports@caomhin.org
COMMENT=	Global custom management extensions for the Django Framework

LICENSE=	BSD

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}django>0:${PORTSDIR}/www/py-django \
		${PYTHON_PKGNAMEPREFIX}six>0:${PORTSDIR}/devel/py-six

USE_PYTHON=	-2.7
USE_PYDISTUTILS=easy_install

.include <bsd.port.mk>
