# Created by: Alexey V. Degtyarev <alexey@renatasystems.org>
# $FreeBSD: devel/py-jmespath/Makefile 336572 2013-12-15 19:30:39Z alexey $

PORTNAME=	jmespath
PORTVERSION=	0.2.0
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	alexey@renatasystems.org
COMMENT=	JSON Matching Expressions

LICENSE=	MIT

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}ply>=3.4:${PORTSDIR}/devel/py-ply

USE_PYTHON=	yes
USE_PYDISTUTILS=yes
PYDISTUTILS_AUTOPLIST=	yes

.include <bsd.port.mk>
