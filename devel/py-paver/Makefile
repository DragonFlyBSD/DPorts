# Created by: William Grzybowski <wg@FreeBSD.org>
# $FreeBSD: devel/py-paver/Makefile 335069 2013-11-27 22:11:46Z wg $

PORTNAME=	paver
PORTVERSION=	1.2.1
CATEGORIES=	devel
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	Paver-${PORTVERSION}

MAINTAINER=	wg@FreeBSD.org
COMMENT=	Easy build, distribution and deployment scripting

BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}setuptools>=0:${PORTSDIR}/devel/py-setuptools

USE_PYTHON=	yes
USE_PYDISTUTILS=	yes
PYDISTUTILS_PKGNAME=	Paver
PYDISTUTILS_AUTOPLIST=	yes

.include <bsd.port.mk>
