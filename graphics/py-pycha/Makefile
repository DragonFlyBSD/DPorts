# Created by: Wen Heping <wenheping@gmail.com>
# $FreeBSD: graphics/py-pycha/Makefile 317021 2013-05-01 14:14:22Z wen $

PORTNAME=	pycha
PORTVERSION=	0.7.0
CATEGORIES=	graphics python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	wen@FreeBSD.org
COMMENT=	A library for making charts with Python

USE_PYTHON=		yes
USE_PYDISTUTILS=	easy_install

OPTIONS_DEFINE=		CAIRO
OPTIONS_DEFAULT=	CAIRO

.include <bsd.port.options.mk>

.if ${PORT_OPTIONS:MCAIRO}
RUN_DEPENDS+=	${PYTHON_SITELIBDIR}/cairo:${PORTSDIR}/graphics/py-cairo
.endif

.include <bsd.port.mk>
