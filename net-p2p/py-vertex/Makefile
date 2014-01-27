# Created by: Alexander Botero-Lowry <alex@foxybanana.com>
# $FreeBSD: net-p2p/py-vertex/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	vertex
PORTVERSION=	0.3.0
CATEGORIES=	net-p2p python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	Vertex-${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Vertex is an implementation of the Q2Q protocol

BUILD_DEPENDS=	${PYTHON_SITELIBDIR}/epsilon/__init__.py:${PORTSDIR}/devel/py-epsilon \
		${PYTHON_SITELIBDIR}/OpenSSL/__init__.py:${PORTSDIR}/security/py-openssl
RUN_DEPENDS=	${PYTHON_SITELIBDIR}/epsilon/__init__.py:${PORTSDIR}/devel/py-epsilon \
		${PYTHON_SITELIBDIR}/OpenSSL/__init__.py:${PORTSDIR}/security/py-openssl

LICENSE=	BSD

USE_PYTHON=	yes
USE_PYDISTUTILS=	yes
PYDISTUTILS_AUTOPLIST=	yes
USES=		twisted

.include <bsd.port.mk>
