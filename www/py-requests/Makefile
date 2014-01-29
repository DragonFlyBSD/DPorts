# Created by: Olivier Duchateau <duchateau.olivier@gmail.com>
# $FreeBSD: www/py-requests/Makefile 341387 2014-01-27 12:21:18Z koobs $

PORTNAME=	requests
PORTVERSION=	2.2.1
CATEGORIES=	www python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	koobs@FreeBSD.org
COMMENT=	HTTP library written in Python for human beings

LICENSE=	ISCL

USE_PYTHON=		yes
USE_PYDISTUTILS=	yes
PYDISTUTILS_AUTOPLIST=	yes

CONFLICTS_INSTALL=	py*-requests1-*

regression-test: build
	@cd ${WRKSRC} && ${PYTHON_CMD} test_requests.py

.include <bsd.port.mk>
