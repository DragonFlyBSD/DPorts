# Created by: Wen Heping <wenheping@gmail.com>
# $FreeBSD: devel/py-repoze.what/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	repoze.what
PORTVERSION=	1.0.9
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	wen@FreeBSD.org
COMMENT=	Authorization for WSGI applications

BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}Paste>=1.7.2:${PORTSDIR}/www/py-paste \
		${PYTHON_PKGNAMEPREFIX}repoze.who-testutil>=0:${PORTSDIR}/devel/py-repoze.who-testutil
RUN_DEPENDS:=	${BUILD_DEPENDS}

USE_PYTHON=	yes
USE_PYDISTUTILS=	easy_install

NO_STAGE=	yes
.include <bsd.port.mk>
