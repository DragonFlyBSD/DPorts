# Created by: Pedro Garcia Freitas <sawp@sawp.com.br>
# $FreeBSD: graphics/mahotas/Makefile 339634 2014-01-13 21:00:02Z rene $

PORTNAME=	mahotas
PORTVERSION=	0.9.6
PORTREVISION=	1
CATEGORIES=	graphics python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	sawp@sawp.com.br
COMMENT=	Computer vision and image processing library for Python

BUILD_DEPENDS=	${PYNUMPY}
LIB_DEPENDS=	freeimage:${PORTSDIR}/graphics/freeimage

USE_GCC=	yes
USE_PYTHON=	yes
USE_PYDISTUTILS=	easy_install
PYEASYINSTALL_ARCHDEP=	yes

NO_STAGE=	yes
.include <bsd.port.mk>
