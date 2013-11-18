# Created by: William Grzybowski <william88@gmail.com>
# $FreeBSD: devel/py-dogpile.cache/Makefile 334100 2013-11-17 16:09:22Z wg $

PORTNAME=	dogpile.cache
PORTVERSION=	0.5.2
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	wg@FreeBSD.org
COMMENT=	Caching front-end based on the Dogpile lock

LICENSE=	BSD

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}dogpile.core>0:${PORTSDIR}/devel/py-dogpile.core

USE_PYTHON=	yes
USE_PYDISTUTILS=easy_install
PYDISTUTILS_AUTOPLIST=	yes
NO_STAGE=	yes

.include <bsd.port.mk>
