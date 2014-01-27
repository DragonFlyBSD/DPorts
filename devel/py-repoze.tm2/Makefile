# Created by: Wen Heping <wenheping@gmail.com>
# $FreeBSD: devel/py-repoze.tm2/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	repoze.tm2
PORTVERSION=	1.0
PORTEPOCH=	1
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	wen@FreeBSD.org
COMMENT=	Zope-like transaction manager via WSGI middleware

BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}transaction>=1.0.0:${PORTSDIR}/devel/py-transaction
RUN_DEPENDS:=	${BUILD_DEPENDS}

USE_PYTHON=	yes
USE_PYDISTUTILS=	easy_install

NO_STAGE=	yes
.include <bsd.port.mk>
