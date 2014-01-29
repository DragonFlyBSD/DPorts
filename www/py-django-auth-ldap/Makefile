# Created by: Alexander Kriventsov <avk@vl.ru>
# $FreeBSD: www/py-django-auth-ldap/Makefile 340647 2014-01-21 20:02:18Z rm $

PORTNAME=	django-auth-ldap
PORTVERSION=	1.1.7
CATEGORIES=	www security python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	avk@vl.ru
COMMENT=	LDAP integration for django.contrib.auth

LICENSE=	BSD2CLAUSE

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}django>=1.3.1:${PORTSDIR}/www/py-django \
		${PYTHON_PKGNAMEPREFIX}ldap2>=2.0:${PORTSDIR}/net/py-ldap2

USE_PYTHON=		yes
USE_PYDISTUTILS=	yes
PYDISTUTILS_AUTOPLIST=	yes

.include <bsd.port.mk>
