# Created by: Cheng-Lung Sung <clsung@FreeBSD.org>
# $FreeBSD: www/py-requests-oauth-hook/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	requests-oauth-hook
PORTVERSION=	0.1.4
CATEGORIES=	www python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	clsung@FreeBSD.org
COMMENT=	This is an OAuth hook for py-requests

LICENSE=	BSD

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}requests>0:${PORTSDIR}/www/py-requests \
		${PYTHON_PKGNAMEPREFIX}oauth2>0:${PORTSDIR}/net/py-oauth2

USE_PYTHON=	yes
USE_PYDISTUTILS=	easy_install

NO_STAGE=	yes
.include <bsd.port.mk>
