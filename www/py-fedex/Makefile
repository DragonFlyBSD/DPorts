# Created by: Kevin Golding <ports@caomhin.org>
# $FreeBSD: www/py-fedex/Makefile 339634 2014-01-13 21:00:02Z rene $

PORTNAME=	fedex
PORTVERSION=	1.0.14
CATEGORIES=	www python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	ports@caomhin.org
COMMENT=	A light wrapper around Fedex's Web Services SOAP API using suds

LICENSE=	BSD

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}suds>=0:${PORTSDIR}/net/py-suds

USE_PYTHON=	2
USE_PYDISTUTILS=	yes

NO_STAGE=	yes
.include <bsd.port.mk>
