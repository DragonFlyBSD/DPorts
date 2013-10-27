# Created by: Wen Heping <wenheping@gmail.com>
# $FreeBSD: science/pybrain/Makefile 331644 2013-10-26 00:52:33Z gerald $

PORTNAME=	pybrain
PORTVERSION=	0.3
PORTREVISION=	1
CATEGORIES=	science python
MASTER_SITES=	CHEESESHOP
DISTNAME=	PyBrain-${PORTVERSION}

MAINTAINER=	wen@FreeBSD.org
COMMENT=	PyBrain is the swiss army knife for neural networking

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}scipy>=0.7.1:${PORTSDIR}/science/py-scipy

USE_PYTHON=		yes
USE_PYDISTUTILS=	easy_install
PYDISTUTILS_PKGNAME=	PyBrain

NO_STAGE=	yes
.include <bsd.port.mk>
