# Created by: Kevin Golding <ports@caomhin.org>
# $FreeBSD: www/py-django-extensions/Makefile 339634 2014-01-13 21:00:02Z rene $

PORTNAME=	django-extensions
PORTVERSION=	1.2.0
CATEGORIES=	www python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	ports@caomhin.org
COMMENT=	Global custom management extensions for the Django Framework

LICENSE=	BSD

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}django>0:${PORTSDIR}/www/py-django \
		${PYTHON_PKGNAMEPREFIX}six>0:${PORTSDIR}/devel/py-six

USE_PYTHON=	2
USE_PYDISTUTILS=easy_install

NO_STAGE=	yes
.include <bsd.port.mk>
