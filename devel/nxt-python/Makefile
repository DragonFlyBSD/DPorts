# Created by: Quentin Stievenart <acieroid@awesom.eu>
# $FreeBSD: devel/nxt-python/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	nxt-python
PORTVERSION=	2.2.2
CATEGORIES=	devel python
MASTER_SITES=	${MASTER_SITE_GOOGLE_CODE}

MAINTAINER=	acieroid@awesom.eu
COMMENT=	Python interface for the Lego Mindstorms NXT robot

LICENSE=	GPLv3

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}usb>=0:${PORTSDIR}/devel/py-usb

USE_PYTHON=	yes
USE_PYDISTUTILS=	yes
PYDISTUTILS_PKGNAME=	${PORTNAME}

NO_STAGE=	yes
.include <bsd.port.mk>
