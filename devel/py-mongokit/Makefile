# Created by: Mirko Zinn <mail@derzinn.de>
# $FreeBSD: ports/devel/py-mongokit/Makefile,v 1.4 2012/11/17 05:56:48 svnexp Exp $

PORTNAME=	mongokit
PORTVERSION=	0.8.1
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	mail@derzinn.de
COMMENT=	Python ORM-like layer on top of pymongo

RUN_DEPENDS=	pymongo>=2.0.1:${PORTSDIR}/databases/pymongo

USE_PYTHON=	-2.7
USE_PYDISTUTILS=	easy_install

.include <bsd.port.mk>
