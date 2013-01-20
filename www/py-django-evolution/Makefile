# Created by: Li-Wen Hsu <lwhsu@FreeBSD.org>
# $FreeBSD: ports/www/py-django-evolution/Makefile,v 1.7 2013/01/07 09:57:09 svnexp Exp $

PORTNAME=	django-evolution
PORTVERSION=	0.6.7
PORTREVISION=	1
CATEGORIES=	www python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	django_evolution-${PORTVERSION}

MAINTAINER=	linpc@cs.nctu.edu.tw
COMMENT=	A database schema evolution tool for the Django web framework

LICENSE=	BSD

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}django>=1.1.1:${PORTSDIR}/www/py-django

USE_PYTHON=	yes
USE_PYDISTUTILS=	easy_install

.include <bsd.port.mk>
