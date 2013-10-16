# Created by: Kubilay Kocak <koobs@FreeBSD.org>
# $FreeBSD: www/py-rackspace-monitoring/Makefile 327776 2013-09-20 23:36:50Z bapt $

PORTNAME=	rackspace-monitoring
PORTVERSION=	0.5.2
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

NO_STAGE=	yes
.include <bsd.port.mk>
