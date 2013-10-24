# Created by: William Grzybowski <wg@FreeBSD.org>
# $FreeBSD: textproc/py-sphinxcontrib-httpdomain/Makefile 331132 2013-10-21 12:54:51Z wg $

PORTNAME=	sphinxcontrib-httpdomain
PORTVERSION=	1.2.0
CATEGORIES=	textproc
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	wg@FreeBSD.org
COMMENT=	Sphinx domain for HTTP APIs

RUN_DEPENDS=	${PKGNAMEPREFIX}sphinx>=1.1.3:${PORTSDIR}/textproc/py-sphinx

USE_PYTHON=	yes
USE_PYDISTUTILS=	easy_install
PYDISTUTILS_AUTOPLIST=	yes

NO_STAGE=	yes
.include <bsd.port.mk>
