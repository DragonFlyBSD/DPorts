# New ports collection makefile for:	py-django-evolution
# Date created:		2011-02-26
# Whom:			Li-Wen Hsu <lwhsu@FreeBSD.org>
#
# $FreeBSD: ports/www/py-django-evolution/Makefile,v 1.6 2012/11/17 06:02:59 svnexp Exp $
#

PORTNAME=	django-evolution
PORTVERSION=	0.6.7
CATEGORIES=	www python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	django_evolution-${PORTVERSION}

MAINTAINER=	lwhsu@FreeBSD.org
COMMENT=	A database schema evolution tool for the Django web framework

LICENSE=	BSD

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}django>=1.1.1:${PORTSDIR}/www/py-django13

USE_PYTHON=	yes
USE_PYDISTUTILS=	easy_install

.include <bsd.port.mk>
