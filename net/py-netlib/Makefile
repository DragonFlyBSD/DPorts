# Created by: Hung-Yi Chen <gaod@hychen.org>
# $FreeBSD: net/py-netlib/Makefile 325141 2013-08-21 14:42:17Z wg $

PORTNAME=	netlib
PORTVERSION=	0.9.1
CATEGORIES=	net python
MASTER_SITES=	${MASTER_SITE_CHEESESHOP}
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	gaod@hychen.org
COMMENT=	Collection of network utilities

LICENSE=	MIT

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}asn1>0:${PORTSDIR}/devel/py-asn1 \
		${PYTHON_PKGNAMEPREFIX}openssl>0:${PORTSDIR}/security/py-openssl

USE_PYTHON=	yes
USE_PYDISTUTILS=	yes

.include <bsd.port.mk>
