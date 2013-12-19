# Created by: William Grzybowski <wg@FreeBSD.org>
# $FreeBSD: devel/py-biplist/Makefile 336730 2013-12-17 14:34:30Z wg $

PORTNAME=	biplist
PORTVERSION=	0.6
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	wg@FreeBSD.org
COMMENT=	Library for reading/writing binary plists

LICENSE=	BSD

BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}nose>=0:${PORTSDIR}/devel/py-nose \
		${PYTHON_PKGNAMEPREFIX}coverage>=0:${PORTSDIR}/devel/py-coverage
RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}six>=0:${PORTSDIR}/devel/py-six
TEST_DEPENDS:=	${RUN_DEPENDS}

USE_PYTHON=	yes
USE_PYDISTUTILS=yes
PYDISTUTILS_AUTOPLIST=	yes

.include <bsd.port.pre.mk>

regression-test: build
	@cd ${WRKSRC} && ${PYTHON_CMD} ${PYSETUP} test

.include <bsd.port.post.mk>
