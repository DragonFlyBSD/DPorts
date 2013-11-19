# Created by: William Grzybowski <wg@FreeBSD.org>
# $FreeBSD: devel/py-stsci.distutils/Makefile 334317 2013-11-19 13:34:06Z wg $

PORTNAME=	stsci.distutils
PORTVERSION=	0.3.5
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	wg@FreeBSD.org
COMMENT=	Packaging utilities used by some of STScI\'s packages

LICENSE=	BSD

BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}d2to1>0:${PORTSDIR}/devel/py-d2to1

USE_PYTHON=	yes
USE_PYDISTUTILS=easy_install
PYDISTUTILS_AUTOPLIST=	yes

.include <bsd.port.mk>
