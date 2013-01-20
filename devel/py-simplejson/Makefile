# Created by: Alexander Botero-Lowry <alex@foxybanana.com>
# $FreeBSD: ports/devel/py-simplejson/Makefile,v 1.40 2013/01/02 17:42:00 svnexp Exp $

PORTNAME=	simplejson
PORTVERSION=	3.0.3
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	python@FreeBSD.org
COMMENT=	Simple, fast, extensible JSON encoder/decoder

LICENSE=	MIT

USE_PYTHON=	yes
USE_PYDISTUTILS=	yes

regression-test: build
	@(cd ${WRKSRC} && ${PYTHON_CMD} ${PYSETUP} test)

.include <bsd.port.mk>
