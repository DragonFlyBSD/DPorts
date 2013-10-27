# Created by: Ju Pengfei <ju.pengfei@gmail.com>
# $FreeBSD: math/py-numexpr/Makefile 331644 2013-10-26 00:52:33Z gerald $

PORTNAME=	numexpr
PORTVERSION=	2.2.2
PORTREVISION=	1
CATEGORIES=	math python
MASTER_SITES=	GOOGLE_CODE
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Fast numerical array expression evaluator for Python and NumPy

BUILD_DEPENDS=	${PYNUMPY}
RUN_DEPENDS:=	${BUILD_DEPENDS}

USE_PYTHON=	yes
USE_PYDISTUTILS=yes

post-patch:
	@${REINPLACE_CMD} -e 's|\(import\) \(setuptools\)|\1 do_not_use_\2|' ${WRKSRC}/${PYSETUP}

.include <bsd.port.mk>
