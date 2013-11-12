# Created by: Wen Heping <wenheping@gmail.com>
# $FreeBSD: astro/py-pyfits/Makefile 332995 2013-11-06 14:42:02Z wg $

PORTNAME=	pyfits
PORTVERSION=	3.1.2
CATEGORIES=	astro python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	tonymaher@optusnet.com.au
COMMENT=	Python Interface to FITS Formatted Files

BUILD_DEPENDS=	${PYTHON_SITELIBDIR}/numpy/core/numeric.py:${PORTSDIR}/math/py-numpy \
		${PYTHON_PKGNAMEPREFIX}d2to1>=0:${PORTSDIR}/devel/py-d2to1 \
		${PYTHON_PKGNAMEPREFIX}stsci.distutils>=0:${PORTSDIR}/devel/py-stsci.distutils
RUN_DEPENDS=	${PYTHON_SITELIBDIR}/numpy/core/numeric.py:${PORTSDIR}/math/py-numpy \
		${PYTHON_PKGNAMEPREFIX}d2to1>=0:${PORTSDIR}/devel/py-d2to1

USE_PYTHON=	yes
USE_PYDISTUTILS=	easy_install
PYDISTUTILS_AUTOPLIST=	yes
PYEASYINSTALL_ARCHDEP=	yes
NO_STAGE=	yes

.include <bsd.port.mk>
