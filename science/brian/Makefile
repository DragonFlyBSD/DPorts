# Created by: wenheping@gmail.com
# $FreeBSD: science/brian/Makefile 323508 2013-07-23 03:19:47Z wen $

PORTNAME=	brian
PORTVERSION=	1.4.1
CATEGORIES=	science python
MASTER_SITES=	CHEESESHOP \
		SF/${PORTNAME}/Brian/${PORTVERSION}

MAINTAINER=	wen@FreeBSD.org
COMMENT=	A clock-driven simulator for spiking neural networks

BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}numpy>=1.1.0:${PORTSDIR}/math/py-numpy \
		${PYTHON_PKGNAMEPREFIX}scipy>=0.6.0:${PORTSDIR}/science/py-scipy \
		${PYTHON_PKGNAMEPREFIX}matplotlib>=0.90.1:${PORTSDIR}/math/py-matplotlib
RUN_DEPENDS:=	${BUILD_DEPENDS}

USE_ZIP=	yes
USE_PYTHON=	2.5+
USE_PYDISTUTILS=	yes

.include <bsd.port.mk>
