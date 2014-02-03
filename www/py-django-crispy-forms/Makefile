# Created by: Johannes Meixner <xmj@chaot.net>
# $FreeBSD: www/py-django-crispy-forms/Makefile 342248 2014-02-02 08:10:14Z koobs $

PORTNAME=	crispy-forms
PORTVERSION=	1.4.0
CATEGORIES=	www python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}django-
DISTNAME=	django-${PORTNAME}-${PORTVERSION}

MAINTAINER=	xmj@chaot.net
COMMENT=	The best way to have Django DRY forms

LICENSE=	MIT

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}django<1.7:${PORTSDIR}/www/py-django

USE_PYTHON=		yes
USE_PYDISTUTILS=	yes
PYDISTUTILS_AUTOPLIST=	yes

.include <bsd.port.mk>
