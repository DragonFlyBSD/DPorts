# Created by: Kozlov Sergey <kozlov.sergey.404@gmail.com>
# $FreeBSD: www/py-django-tables2/Makefile 326638 2013-09-07 14:09:38Z wg $

PORTNAME=	django-tables2
PORTVERSION=	0.14.0
CATEGORIES=	www python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	kozlov.sergey.404@gmail.com
COMMENT=	Table/data-grid framework for Django

LICENSE=	BSD

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}django>=1.2:${PORTSDIR}/www/py-django \
		${PYTHON_PKGNAMEPREFIX}six>=0:${PORTSDIR}/devel/py-six

USE_PYTHON=	yes
USE_PYDISTUTILS=	easy_install

post-patch:
	@${REINPLACE_CMD} 's|classifiers=\[|zip_safe=False, classifiers=\[|' \
		${WRKSRC}/setup.py

.include <bsd.port.mk>
