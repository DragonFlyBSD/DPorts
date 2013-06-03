# Created by: Kevin Golding <ports@caomhin.org>
# $FreeBSD: www/py-fedex/Makefile 318893 2013-05-23 17:59:47Z miwi $

PORTNAME=	fedex
PORTVERSION=	1.0.14
CATEGORIES=	www python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	ports@caomhin.org
COMMENT=	A light wrapper around Fedex's Web Services SOAP API using suds

LICENSE=	BSD

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}suds>=0:${PORTSDIR}/net/py-suds

USE_PYTHON=	-2.7
USE_PYDISTUTILS=	yes

.include <bsd.port.mk>
