# Created by: Kubilay Kocak <koobs@FreeBSD.org>
# $FreeBSD: devel/py-pbr/Makefile 338168 2013-12-30 20:55:18Z ohauer $

PORTNAME=	pbr
PORTVERSION=	0.5.23
PORTREVISION=	1
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	koobs@FreeBSD.org
COMMENT=	Python Build Reasonableness

LICENSE=	APACHE20

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}pip>=1.0:${PORTSDIR}/devel/py-pip

USE_PYTHON=		yes
USE_PYDISTUTILS=	easy_install
PYDISTUTILS_AUTOPLIST=	yes

.include <bsd.port.mk>
