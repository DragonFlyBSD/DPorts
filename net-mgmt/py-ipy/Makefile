# Created by: ijliao
# $FreeBSD: net-mgmt/py-ipy/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	ipy
PORTVERSION=	0.81
CATEGORIES=	net-mgmt python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	IPy-${PORTVERSION}

MAINTAINER=	wen@FreeBSD.org
COMMENT=	A Python module for handling IPv4 and IPv6 Addresses and Networks

USE_PYTHON=	yes
USE_PYDISTUTILS=	yes
PYDISTUTILS_PKGNAME=	IPy

test: install
	${PYTHON_CMD} ${WRKSRC}/test/test_IPy.py

NO_STAGE=	yes
.include <bsd.port.mk>
