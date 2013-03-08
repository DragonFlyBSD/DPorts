# Created by: Kubilay Kocak <koobs@FreeBSD.org>
# $FreeBSD: ports/www/py-rackspace-monitoring/Makefile,v 1.7 2013/02/09 15:59:54 svnexp Exp $

PORTNAME=	rackspace-monitoring
PORTVERSION=	0.3.2
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
