# Created by: Mario Sergio Fujikawa Ferreira <lioux@FreeBSD.org>
# $FreeBSD: ports/devel/py-dateutil/Makefile,v 1.17 2013/01/24 07:51:55 svnexp Exp $

PORTNAME=	dateutil
PORTVERSION=	2.1
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	python-dateutil-${PORTVERSION}

MAINTAINER=	nivit@FreeBSD.org
COMMENT=	Provides powerful extensions to the standard datetime module

LICENSE=	BSD

BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}six>0:${PORTSDIR}/devel/py-six
RUN_DEPENDS+=	${BUILD_DEPENDS}

USE_PYTHON=	yes
USE_PYDISTUTILS=	easy_install
PYDISTUTILS_PKGNAME=	python-dateutil

regression-test: build
	@cd ${WRKSRC} && ${PYTHON_CMD} test.py

.include <bsd.port.mk>
