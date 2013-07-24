# Created by: John Marino <marino@FreeBSD.org>
# $FreeBSD: textproc/py-sphinxcontrib-adadomain/Makefile 323383 2013-07-21 13:09:02Z marino $

PORTNAME=	sphinxcontrib-adadomain
PORTVERSION=	0.1
CATEGORIES=	textproc
MASTER_SITES=	https://pypi.python.org/packages/source/s/${PORTNAME}/ \
		LOCAL/marino
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	marino@FreeBSD.org
COMMENT=	Sphinx Adadomain Extension

RUN_DEPENDS=	${PKGNAMEPREFIX}sphinx>=1.1.3:${PORTSDIR}/textproc/py-sphinx

USE_PYTHON=	yes
USE_PYDISTUTILS=	easy_install

.include <bsd.port.mk>
