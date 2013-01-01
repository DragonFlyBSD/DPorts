# New ports collection makefile for:	PyBrain
# Date created:		18 Nov, 2009
# Whom:			Wen Heping <wenheping@gmail.com>
#
# $FreeBSD: ports/science/pybrain/Makefile,v 1.2 2012/11/17 06:00:59 svnexp Exp $
#

PORTNAME=	pybrain
PORTVERSION=	0.3
CATEGORIES=	science python
MASTER_SITES=	CHEESESHOP
DISTNAME=	PyBrain-${PORTVERSION}

MAINTAINER=	wen@FreeBSD.org
COMMENT=	PyBrain is the swiss army knife for neural networking

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}scipy>=0.7.1:${PORTSDIR}/science/py-scipy

USE_PYTHON=		yes
USE_PYDISTUTILS=	easy_install
PYDISTUTILS_PKGNAME=	PyBrain

.include <bsd.port.mk>
