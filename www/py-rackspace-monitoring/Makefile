# Created by: Kubilay Kocak <koobs@FreeBSD.org>
# $FreeBSD: www/py-rackspace-monitoring/Makefile 321030 2013-06-16 09:42:21Z koobs $

PORTNAME=	rackspace-monitoring
PORTVERSION=	0.5.1
CATEGORIES=	www python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	koobs@FreeBSD.org
COMMENT=	Python client library for Rackspace Cloud Monitoring

LICENSE=	AL2

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}libcloud>=0.12.4:${PORTSDIR}/net/py-libcloud

# Python3 ready
USE_PYTHON=		yes
USE_PYDISTUTILS=	yes

.include <bsd.port.mk>
