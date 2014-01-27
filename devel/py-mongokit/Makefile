# Created by: Mirko Zinn <mail@derzinn.de>
# $FreeBSD: devel/py-mongokit/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	mongokit
PORTVERSION=	0.8.3
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	mail@derzinn.de
COMMENT=	Python ORM-like layer on top of pymongo

RUN_DEPENDS=	pymongo>=2.0.1:${PORTSDIR}/databases/pymongo

USE_PYTHON=	2
USE_PYDISTUTILS=	easy_install

NO_STAGE=	yes
.include <bsd.port.mk>
