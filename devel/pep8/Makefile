# Created by: Sofian Brabez <sbrabez@gmail.com>
# $FreeBSD: devel/pep8/Makefile 313452 2013-03-05 13:24:46Z sbz $

PORTNAME=	pep8
PORTVERSION=	1.4.4
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
