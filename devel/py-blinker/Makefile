# Created by: Kubilay Kocak <koobs@FreeBSD.org>
# $FreeBSD: devel/py-blinker/Makefile 322422 2013-07-07 08:21:48Z koobs $

PORTNAME=	blinker
PORTVERSION=	1.3
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	koobs@FreeBSD.org
COMMENT=	Fast, simple object-to-object and broadcast signaling

LICENSE=	MIT

TEST_DEPENDS=	${PYTHON_PKGNAMEPREFIX}nose>0:${PORTSDIR}/devel/py-nose

USE_PYTHON=		yes
USE_PYDISTUTILS=	yes

regression-test: build
	@cd ${WRKSRC} && nosetests

.include <bsd.port.mk>
