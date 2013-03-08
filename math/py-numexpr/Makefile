# Created by: Ju Pengfei <ju.pengfei@gmail.com>
# $FreeBSD: ports/math/py-numexpr/Makefile,v 1.7 2013/01/30 20:17:54 svnexp Exp $

PORTNAME=	numexpr
PORTVERSION=	2.0.1
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
