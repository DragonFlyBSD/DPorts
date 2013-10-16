# Created by: Li-Wen Hsu <lwhsu@FreeBSD.org>
# $FreeBSD: www/py-pyramid_rpc/Makefile 327879 2013-09-22 16:30:10Z lwhsu $

PORTNAME=	pyramid_rpc
PORTVERSION=	0.5.1
CATEGORIES=	www python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	lwhsu@FreeBSD.org
COMMENT=	RPC support for the Pyramid web framework

BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}pyramid>=0:${PORTSDIR}/www/py-pyramid
RUN_DEPENDS:=	${BUILD_DEPENDS}

USE_PYTHON=	yes
USE_PYDISTUTILS=	easy_install

NO_STAGE=	yes

.include <bsd.port.mk>
