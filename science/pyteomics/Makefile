# $FreeBSD: science/pyteomics/Makefile 317856 2013-05-11 07:42:20Z makc $

PORTNAME=	pyteomics
PORTVERSION=	2.1.5
CATEGORIES=	science python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	makc@FreeBSD.org
COMMENT=	Python modules for proteomics data analysis

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}lxml>=0:${PORTSDIR}/devel/py-lxml \
		${PYTHON_PKGNAMEPREFIX}matplotlib>=0:${PORTSDIR}/math/py-matplotlib \
		${PYNUMPY}

USE_PYTHON=	yes
USE_PYDISTUTILS=	yes

.include <bsd.port.mk>
