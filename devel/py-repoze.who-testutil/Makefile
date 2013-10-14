# Created by: Wen Heping <wenheping@gmail.com>
# $FreeBSD: devel/py-repoze.who-testutil/Makefile 327724 2013-09-20 17:13:42Z bapt $

PORTNAME=	repoze.who-testutil
PORTVERSION=	1.0.1
PORTEPOCH=	1
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Test utilities for repoze.who-powered applications

BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}repoze.who>=1.0.15:${PORTSDIR}/devel/py-repoze.who \
		${PYTHON_PKGNAMEPREFIX}PasteDeploy>=1.3.3:${PORTSDIR}/www/py-pastedeploy
RUN_DEPENDS:=	${BUILD_DEPENDS}

USE_PYTHON=	yes
USE_PYDISTUTILS=	easy_install
PYDISTUTILS_PKGNAME=	repoze.who_testutil

NO_STAGE=	yes
.include <bsd.port.mk>
