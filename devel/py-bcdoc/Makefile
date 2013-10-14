# Created by: Alexey V. Degtyarev <alexey@renatasystems.org>
# $FreeBSD: devel/py-bcdoc/Makefile 327993 2013-09-23 12:52:41Z culot $

PORTNAME=	bcdoc
PORTVERSION=	0.10.0
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

NO_STAGE=	yes
.include <bsd.port.mk>
