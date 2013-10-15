# Created by: Wen Heping <wenheping@gmail.com>
# $FreeBSD: devel/py-gitpython/Makefile 327724 2013-09-20 17:13:42Z bapt $

PORTNAME=	GitPython
PORTVERSION=	0.3.1
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Python Git Library

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}gitdb>0:${PORTSDIR}/devel/py-gitdb

USE_PYTHON=	yes
USE_PYDISTUTILS=easy_install

NO_STAGE=	yes
.include <bsd.port.mk>
