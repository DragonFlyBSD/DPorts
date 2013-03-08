# Created by: Vladimir Chukharev
# $FreeBSD: ports/devel/py-robotframework-selenium2library/Makefile,v 1.2 2013/02/14 15:21:04 svnexp Exp $

PORTNAME=	robotframework-selenium2library
PORTVERSION=	1.1.0
CATEGORIES=	devel www python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	Vladimir.Chukharev@gmail.com
COMMENT=	Web testing library for Robot Framework

LICENSE=	AL2

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}robotframework>=2.7.5:${PORTSDIR}/devel/py-robotframework \
		${PYTHON_PKGNAMEPREFIX}decorator>=3.4.0:${PORTSDIR}/devel/py-decorator

USE_PYTHON=	-2.7
USE_PYDISTUTILS=	easy_install

.include <bsd.port.mk>
