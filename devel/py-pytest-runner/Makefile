# Created by: William Grzybowski <william88@gmail.com>
# $FreeBSD: devel/py-pytest-runner/Makefile 320793 2013-06-13 12:25:51Z wg $

PORTNAME=	pytest-runner
PORTVERSION=	2.0
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	wg@FreeBSD.org
COMMENT=	Test support for pytest runner in setup.py

BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}hgtools>=0:${PORTSDIR}/devel/py-hgtools

USE_ZIP=	yes
USE_PYTHON=	-2.7
USE_PYDISTUTILS=	easy_install

PLIST_FILES=	%%PYTHON_SITELIBDIR%%/%%PYEASYINSTALL_EGG%%

.include <bsd.port.mk>
