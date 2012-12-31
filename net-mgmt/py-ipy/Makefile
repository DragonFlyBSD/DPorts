# ex:ts=8
# Ports collection makefile for:	py-ipy
# Date created:			Jan 30, 2002
# Whom:	      			ijliao
#
# $FreeBSD: ports/net-mgmt/py-ipy/Makefile,v 1.23 2012/11/17 06:00:36 svnexp Exp $
#

PORTNAME=	ipy
PORTVERSION=	0.75
CATEGORIES=	net-mgmt python
MASTER_SITES=	${MASTER_SITE_CHEESESHOP}
MASTER_SITE_SUBDIR=	source/I/IPy
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	IPy-${PORTVERSION}

MAINTAINER=	wen@FreeBSD.org
COMMENT=	A Python module for handling IPv4 and IPv6 Addresses and Networks

USE_PYTHON=	yes
USE_PYDISTUTILS=	yes
PYDISTUTILS_PKGNAME=	IPy

test: install
	${PYTHON_CMD} ${WRKSRC}/test/test_IPy.py

.include <bsd.port.mk>
