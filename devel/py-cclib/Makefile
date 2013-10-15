# Created by: Wen Heping <wenheping@gmail.com>
# $FreeBSD: devel/py-cclib/Makefile 327724 2013-09-20 17:13:42Z bapt $

PORTNAME=	cclib
PORTVERSION=	1.1
CATEGORIES=	devel python
MASTER_SITES=	SF/${PORTNAME}/${PORTNAME}/${PORTNAME}-${PORTVERSION}
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	wen@FreeBSD.org
COMMENT=	Parsers And Algorithms For Computational Chemistry

BUILD_DEPENDS=	${PYNUMPY}
RUN_DEPENDS=	${PYNUMPY}

USE_PYTHON=	yes
USE_PYDISTUTILS=	yes

NO_STAGE=	yes
.include <bsd.port.mk>
