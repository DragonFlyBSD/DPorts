# Created by: Mark Felder <feld@FreeBSD.org>
# $FreeBSD: audio/py-discogs-client/Makefile 323891 2013-07-29 15:03:58Z feld $

PORTNAME=	discogs-client
PORTVERSION=	1.1.1
CATEGORIES=	audio python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	feld@FreeBSD.org
COMMENT=	Python interface to Discogs website

LICENSE=	BSD

RUN_DEPENDS=    ${PYTHON_PKGNAMEPREFIX}requests>=1.0.0:${PORTSDIR}/www/py-requests

USE_PYTHON=	yes
USE_PYDISTUTILS=	easy_install

.include <bsd.port.mk>
