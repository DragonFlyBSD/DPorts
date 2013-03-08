# Created by: Wen Heping <wenheping@gmail.com>
# $FreeBSD: ports/devel/py-cclib/Makefile,v 1.7 2013/02/16 13:19:51 svnexp Exp $

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

.include <bsd.port.mk>
