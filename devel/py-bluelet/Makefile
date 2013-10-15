# Created by: Mark Felder <feld@FreeBSD.org>
# $FreeBSD: devel/py-bluelet/Makefile 327724 2013-09-20 17:13:42Z bapt $

PORTNAME=	bluelet
PORTVERSION=	0.2.0
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	feld@FreeBSD.org
COMMENT=	Pure-Python asynchronous I/O using coroutines

LICENSE=	MIT

USE_PYTHON=	yes
USE_PYDISTUTILS=	yes

PLIST_FILES=	%%PYTHON_SITELIBDIR%%/bluelet.py \
		%%PYTHON_SITELIBDIR%%/bluelet.pyc \
		%%PYTHON_SITELIBDIR%%/bluelet.pyo

NO_STAGE=	yes
.include <bsd.port.mk>
