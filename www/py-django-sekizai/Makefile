# Created by: Matthew X. Economou <xenophon+fbsdports@irtnog.org>
# $FreeBSD: www/py-django-sekizai/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	django-sekizai
PORTVERSION=	0.7
CATEGORIES=	www python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	xenophon+fbsdports@irtnog.org
COMMENT=	Block templating system for Django

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}django>0:${PORTSDIR}/www/py-django \
		${PYTHON_PKGNAMEPREFIX}django-classy-tags>=0.3.1:${PORTSDIR}/www/py-django-classy-tags

USE_PYTHON=	2
USE_PYDISTUTILS=	easy_install

NO_STAGE=	yes
.include <bsd.port.mk>
