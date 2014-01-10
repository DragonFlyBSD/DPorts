# Created by: Kubilay Kocak <koobs@FreeBSD.org>
# $FreeBSD: www/py-rackspace-monitoring/Makefile 338168 2013-12-30 20:55:18Z ohauer $

PORTNAME=	rackspace-monitoring
PORTVERSION=	0.5.2
CATEGORIES=	www python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	koobs@FreeBSD.org
COMMENT=	Python client library for Rackspace Cloud Monitoring

LICENSE=	APACHE20

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}libcloud>=0.12.4:${PORTSDIR}/net/py-libcloud

# Python3 ready
USE_PYTHON=		yes
USE_PYDISTUTILS=	yes

NO_STAGE=	yes
.include <bsd.port.mk>
