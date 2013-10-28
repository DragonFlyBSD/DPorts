# Created by: Johannes Meixner <xmj@chaot.net>
# $FreeBSD: science/py-pupynere/Makefile 331644 2013-10-26 00:52:33Z gerald $

PORTNAME=	pupynere
PORTVERSION=	1.0.15
PORTREVISION=	1
CATEGORIES=	science python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	xmj@chaot.net
COMMENT=	Python module for reading and writing NetCDF files

LICENSE=	MIT

BUILD_DEPENDS=	${PYNUMPY}
RUN_DEPENDS=	${PYNUMPY}

USE_PYTHON=		-2.7
USE_PYDISTUTILS=	easy_install
PYDISTUTILS_NOEGGINFO=	yes

NO_STAGE=	yes
.include <bsd.port.mk>
