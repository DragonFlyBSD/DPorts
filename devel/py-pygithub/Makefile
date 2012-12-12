# Created by: Kubilay Kocak <koobs.freebsd@gmail.com>
# $FreeBSD: ports/devel/py-pygithub/Makefile,v 1.6 2012/11/17 05:56:49 svnexp Exp $

PORTNAME=	pygithub
PORTVERSION=	1.8.0
CATEGORIES=	devel www python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	PyGithub-${PORTVERSION}

MAINTAINER=	koobs.freebsd@gmail.com
COMMENT=	Use the full Github API v3 with Python

LICENSE=	LGPL3

USE_ZIP=		yes
USE_PYTHON=		yes
USE_PYDISTUTILS=	yes

PYDISTUTILS_PKGNAME=	PyGithub

regression-test: build
	@cd ${WRKSRC} && ${PYTHON_CMD} ${PYSETUP} test

.include <bsd.port.mk>
