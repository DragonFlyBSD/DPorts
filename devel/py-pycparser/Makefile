# Created by: William Grzybowski <wg@FreeBSD.org>
# $FreeBSD: head/devel/py-pycparser/Makefile 466114 2018-04-01 03:58:03Z koobs $

PORTNAME=	pycparser
PORTVERSION=	2.18
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	wg@FreeBSD.org
COMMENT=	C parser in Python

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

# README says 2.7+, 3.4, 3.5+
# TravisCI tests 2.6, 2.7, 3.2, 3.4, 3.5
# https://travis-ci.org/eliben/pycparser
# Go with the most accurate without missing any
USES=		python
USE_PYTHON=	autoplist distutils

NO_ARCH=	yes

do-test:
	@cd ${WRKSRC} && ${PYTHON_CMD} tests/all_tests.py

.include <bsd.port.mk>
