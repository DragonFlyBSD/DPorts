# Created by: Wen Heping <wenheping@wenheping.com>
# $FreeBSD: converters/py-svglib/Makefile 317273 2013-05-03 21:56:56Z bapt $

PORTNAME=	svglib
PORTVERSION=	0.6.3
PORTREVISION=	2
CATEGORIES=	converters python
MASTER_SITES=	CHEESESHOP \
		http://www.dinu-gherman.net/tmp/
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	wen@FreeBSD.org
COMMENT=	An Library For Reading And Converting SVG


RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}reportlab2>0:${PORTSDIR}/print/py-reportlab2

LICENSE=	LGPL3

USE_PYTHON=	yes
USE_PYDISTUTILS=	easy_install

.include <bsd.port.mk>
