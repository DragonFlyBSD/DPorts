# Created by: Wen Heping <wenheping@gmail.com>
# $FreeBSD: devel/py-cclib/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	cclib
PORTVERSION=	1.1
PORTREVISION=	1
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
