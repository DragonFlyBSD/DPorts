# Created by: Wen Heping <wenheping@gmail.com>
# $FreeBSD: devel/py-pymarc/Makefile 319755 2013-06-03 06:42:36Z wen $

PORTNAME=	pymarc
PORTVERSION=	2.8.8
PORTEPOCH=	1
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	wen@FreeBSD.org
COMMENT=	Read Write And Modify MARC Bibliographic Data

LICENSE=	BSD

PLIST_FILES=		%%PYTHON_SITELIBDIR%%/%%PYEASYINSTALL_EGG%%
USE_PYTHON=		-2.7
USE_PYDISTUTILS=	easy_install

regression-test: build
	@cd ${WRKSRC} && ${PYTHON_CMD} test.py

.include <bsd.port.mk>
