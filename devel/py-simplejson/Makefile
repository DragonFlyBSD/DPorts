# Created by: Alexander Botero-Lowry <alex@foxybanana.com>
# $FreeBSD: ports/devel/py-simplejson/Makefile,v 1.39 2012/11/17 05:56:50 svnexp Exp $

PORTNAME=	simplejson
PORTVERSION=	2.6.2
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	python@FreeBSD.org
COMMENT=	Simple, fast, extensible JSON encoder/decoder

LICENSE=	MIT

USE_PYTHON=	-2.7
USE_PYDISTUTILS=	yes

regression-test: build
	@(cd ${WRKSRC} && ${PYTHON_CMD} ${PYSETUP} test)

.include <bsd.port.mk>
