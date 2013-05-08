# Created by: Ju Pengfei <ju.pengfei@gmail.com>
# $FreeBSD: math/py-numexpr/Makefile 317046 2013-05-01 20:10:34Z sunpoet $

PORTNAME=	numexpr
PORTVERSION=	2.1
CATEGORIES=	math python
MASTER_SITES=	GOOGLE_CODE
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Fast numerical array expression evaluator for Python and NumPy

BUILD_DEPENDS=	${PYNUMPY}
RUN_DEPENDS=	${PYNUMPY}

USE_PYTHON=	yes
USE_PYDISTUTILS=easy_install
PYEASYINSTALL_ARCHDEP=	yes

.include <bsd.port.mk>
