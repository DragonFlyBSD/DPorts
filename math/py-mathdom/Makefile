# Created by: Wen Heping <wenheping@gmail.com>
# $FreeBSD: math/py-mathdom/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	mathdom
PORTVERSION=	0.8
CATEGORIES=	math python
MASTER_SITES=	CHEESESHOP/source/m/${PORTNAME}/
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	wenheping@gmail.com
COMMENT=	Content MathML in Python

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}lxml>0:${PORTSDIR}/devel/py-lxml

USE_PYTHON=	yes
USE_PYDISTUTILS=easy_install

NO_STAGE=	yes
.include <bsd.port.mk>
