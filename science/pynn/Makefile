# Created by: Ju Pengfei <jupengfei@gmail.com>
# $FreeBSD: science/pynn/Makefile 331644 2013-10-26 00:52:33Z gerald $

PORTNAME=	pynn
PORTVERSION=	0.7.5
PORTREVISION=	1
CATEGORIES=	science python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	PyNN-${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Simulator-independent language for building neuronal network models

BUILD_DEPENDS=	${PYNUMPY}
RUN_DEPENDS=	${PYNUMPY}

USE_PYTHON=		yes
USE_PYDISTUTILS=	yes
PYDISTUTILS_PKGNAME=	PyNN

NO_STAGE=	yes
.include <bsd.port.mk>
