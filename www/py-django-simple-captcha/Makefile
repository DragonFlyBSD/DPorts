# Created by: John Hixson <john@ixsystems.com>
# $FreeBSD: www/py-django-simple-captcha/Makefile 338437 2014-01-02 12:42:28Z wg $

PORTNAME=	django-simple-captcha
PORTVERSION=	0.4.1
CATEGORIES=	www python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	john@ixsystems.com
COMMENT=	Simple, yet powerful, Django captcha application

LICENSE=	MIT

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}django>=1.3:${PORTSDIR}/www/py-django \
		${PYTHON_PKGNAMEPREFIX}pillow>=2.0.0:${PORTSDIR}/graphics/py-pillow \
		${PYTHON_PKGNAMEPREFIX}six>=1.2.0:${PORTSDIR}/devel/py-six

USE_PYTHON=	yes
USE_PYDISTUTILS=yes
PYDISTUTILS_AUTOPLIST=	yes

.include <bsd.port.mk>
