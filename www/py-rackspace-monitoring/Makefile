# Created by: Kubilay Kocak <koobs@FreeBSD.org>
# $FreeBSD: www/py-rackspace-monitoring/Makefile 316792 2013-04-29 09:55:29Z koobs $

PORTNAME=	rackspace-monitoring
PORTVERSION=	0.3.6
CATEGORIES=	www python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	koobs@FreeBSD.org
COMMENT=	Python client library for Rackspace Cloud Monitoring

LICENSE=	AL2

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}libcloud>=0.9.0:${PORTSDIR}/net/py-libcloud

# Python3 ready
USE_PYTHON=		yes
USE_PYDISTUTILS=	yes

.include <bsd.port.mk>
