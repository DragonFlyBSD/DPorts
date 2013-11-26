# Created by: Wen Heping <wenheping@wenheping.com>
# $FreeBSD: converters/py-svglib/Makefile 334555 2013-11-22 08:24:11Z bapt $

PORTNAME=	svglib
PORTVERSION=	0.6.3
PORTREVISION=	2
CATEGORIES=	converters python
MASTER_SITES=	CHEESESHOP \
		http://www.dinu-gherman.net/tmp/
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	wen@FreeBSD.org
COMMENT=	An Library For Reading And Converting SVG

DEPRECATED=	Broken for more than 6 month
EXPIRATION_DATE=	2013-12-22


RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}reportlab2>0:${PORTSDIR}/print/py-reportlab2

LICENSE=	LGPL3

USE_PYTHON=	yes
USE_PYDISTUTILS=	easy_install

NO_STAGE=	yes
.include <bsd.port.mk>
