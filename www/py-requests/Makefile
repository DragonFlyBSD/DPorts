# New ports collection makefile for: py-requests
# Date created:		2011-07-30
# Whom:		Olivier Duchateau <duchateau.olivier@gmail.com>
#
# $FreeBSD: ports/www/py-requests/Makefile,v 1.24 2012/11/17 06:03:01 svnexp Exp $
#

PORTNAME=	requests
PORTVERSION=	0.14.1
CATEGORIES=	www python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	koobs.freebsd@gmail.com
COMMENT=	HTTP library written in Python for human beings

LICENSE=	ISCL

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}certifi>0:${PORTSDIR}/security/py-certify \
		${PYTHON_PKGNAMEPREFIX}oauthlib>=0.1.0:${PORTSDIR}/security/py-oauthlib

USE_PYTHON=	-3.1
USE_PYDISTUTILS=	easy_install

test: build
	${TOUCH} ${WRKSRC}/tests/__init__.py
	cd ${WRKSRC} && ${PYTHON_CMD} ${PYSETUP} test

.include <bsd.port.mk>
