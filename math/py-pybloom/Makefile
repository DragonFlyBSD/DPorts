# New ports collection makefile for:	py-pybloom
# Date created:		2011-02-20
# Whom:			Li-Wen Hsu <lwhsu@FreeBSD.org>
#
# $FreeBSD: ports/math/py-pybloom/Makefile,v 1.4 2012/11/17 05:59:29 svnexp Exp $
#

PORTNAME=	pybloom
PORTVERSION=	1.1
CATEGORIES=	math python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	lwhsu@FreeBSD.org
COMMENT=	A Probabilistic data structure

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}bitarray>0:${PORTSDIR}/devel/py-bitarray

USE_PYTHON=	yes
USE_PYDISTUTILS=	easy_install

.include <bsd.port.mk>
