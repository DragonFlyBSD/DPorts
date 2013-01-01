# New ports collection makefile for:	py-cclib
# Date created:				09 July 2008
# Whom:					Wen Heping <wenheping@gmail.com>
#
# $FreeBSD: ports/devel/py-cclib/Makefile,v 1.6 2012/11/17 05:56:45 svnexp Exp $
#

PORTNAME=	cclib
PORTVERSION=	1.0.1
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
