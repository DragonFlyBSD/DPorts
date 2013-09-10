# Created by: Alexey V. Degtyarev <alexey@renatasystems.org>
# $FreeBSD: devel/py-bcdoc/Makefile 326519 2013-09-06 15:53:13Z wg $

PORTNAME=	bcdoc
PORTVERSION=	0.9.0
CATEGORIES=	devel
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	alexey@renatasystems.org
COMMENT=	Tools to help document botocore-based projects

LICENSE=	MIT

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}docutils>=0.10:${PORTSDIR}/textproc/py-docutils \
		${PYTHON_PKGNAMEPREFIX}six>=1.1.0:${PORTSDIR}/devel/py-six

USE_PYTHON=	yes
USE_PYDISTUTILS=easy_install

.include <bsd.port.mk>
