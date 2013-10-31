# Created by: Vladimir Chukharev
# $FreeBSD: devel/py-robotframework-ride/Makefile 332243 2013-10-31 13:57:34Z wg $

PORTNAME=	robotframework-ride
PORTVERSION=	1.2.2
CATEGORIES=	devel www python
MASTER_SITES=	GOOGLE_CODE
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	Vladimir.Chukharev@gmail.com
COMMENT=	Test data editor for Robot Framework

LICENSE=	AL2

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}robotframework>=2.7.5:${PORTSDIR}/devel/py-robotframework \
		${PYTHON_PKGNAMEPREFIX}robotframework-selenium2library>=1.1.0:${PORTSDIR}/devel/py-robotframework-selenium2library

USE_PYTHON=	-2.7
USE_PYDISTUTILS=	yes
PYDISTUTILS_AUTOPLIST=	yes
PYDISTUTILS_NOEGGINFO=	yes
USE_WX=		2.8+
WX_COMPS=	python:run

.include <bsd.port.mk>
