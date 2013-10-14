# Created by: Douglas Thrift <douglas@douglasthrift.net>
# $FreeBSD: security/py-keyczar/Makefile 327769 2013-09-20 22:55:24Z bapt $

PORTNAME=	keyczar
PORTVERSION=	0.71c
CATEGORIES=	security python
MASTER_SITES=	GOOGLE_CODE
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	python-${PORTNAME}-${PORTVERSION}

MAINTAINER=	douglas@douglasthrift.net
COMMENT=	Toolkit for safe and simple cryptography

LICENSE=	AL2

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}pycrypto>=2.0:${PORTSDIR}/security/py-pycrypto

USE_PYTHON=	yes
USE_PYDISTUTILS=	yes
PYDISTUTILS_PKGNAME=	python-${PORTNAME}

NO_STAGE=	yes
.include <bsd.port.mk>
