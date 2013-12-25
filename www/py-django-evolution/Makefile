# Created by: Li-Wen Hsu <lwhsu@FreeBSD.org>
# $FreeBSD: www/py-django-evolution/Makefile 337180 2013-12-22 10:03:15Z antoine $

PORTNAME=	django-evolution
PORTVERSION=	0.6.8
PORTREVISION=	1
CATEGORIES=	www python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	django_evolution-${PORTVERSION}

MAINTAINER=	pclin@FreeBSD.org
COMMENT=	A database schema evolution tool for the Django web framework

LICENSE=	BSD

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}django14>=1.1.1<1.5:${PORTSDIR}/www/py-django14

USE_PYTHON=	yes
USE_PYDISTUTILS=	easy_install

.include <bsd.port.mk>
