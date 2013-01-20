# Created by: Sofian Brabez <sbrabez@gmail.com>
# $FreeBSD: ports/devel/pep8/Makefile,v 1.10 2013/01/09 10:12:15 svnexp Exp $

PORTNAME=	pep8
PORTVERSION=	1.4
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	sbz@FreeBSD.org
COMMENT=	Python style guide checker

LICENSE=	MIT

USE_PYTHON=	yes
USE_PYDISTUTILS=	easy_install
PYDISTUTILS_PKGNAME=	${PORTNAME}
PYDISTUTILS_PKGVERSION=	${PORTVERSION}
PYDISTUTILS_NOEGGINFO=	yes

regression-test: extract
	@(cd ${WRKSRC}; ${PYTHON_CMD} ${PORTNAME}.py --doctest --testsuite=testsuite)

.include <bsd.port.mk>
