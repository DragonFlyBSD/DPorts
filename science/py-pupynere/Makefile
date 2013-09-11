# Created by: Johannes Meixner <xmj@chaot.net>
# $FreeBSD: science/py-pupynere/Makefile 325976 2013-09-02 11:27:42Z koobs $

PORTNAME=	pupynere
PORTVERSION=	1.0.15
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

.include <bsd.port.mk>
