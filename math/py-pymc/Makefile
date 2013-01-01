# New ports collection makefile for:	py-pymc
# Date created:		2008-12-10
# Whom:			Wen Heping <wenheping@gmail.com>
#
# $FreeBSD: ports/math/py-pymc/Makefile,v 1.4 2012/11/17 05:59:29 svnexp Exp $
#

PORTNAME=	pymc
PORTVERSION=	2.0
PORTEPOCH=	1
CATEGORIES=	math python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	wenheping@gmail.com
COMMENT=	Markov Chain Monte Carlo Sampling Toolkit

BUILD_DEPENDS=	${PYNUMPY}
RUN_DEPENDS:=	${BUILD_DEPENDS}

USE_PYTHON=	yes
USE_PYDISTUTILS=	yes

.include <bsd.port.mk>
