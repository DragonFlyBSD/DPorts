# Created by: Mark Felder <feld@FreeBSD.org>
# $FreeBSD: audio/py-discogs-client/Makefile 341385 2014-01-27 12:14:09Z koobs $

PORTNAME=	discogs-client
PORTVERSION=	1.1.1
PORTREVISION=	1
CATEGORIES=	audio python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	feld@FreeBSD.org
COMMENT=	Python interface to Discogs website

LICENSE=	BSD

RUN_DEPENDS=    ${PYTHON_PKGNAMEPREFIX}requests1>=1.0.0:${PORTSDIR}/www/py-requests1

USE_PYTHON=	yes
NO_STAGE=	yes
USE_PYDISTUTILS=	easy_install

.include <bsd.port.mk>
