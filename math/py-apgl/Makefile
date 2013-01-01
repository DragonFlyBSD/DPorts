# New ports collection makefile for:	py-apgl
# Date created:				Oct 28, 2010
# Whom:					Wen Heping <wenheping@gmail.com>
#
# $FreeBSD: ports/math/py-apgl/Makefile,v 1.13 2012/11/17 05:59:28 svnexp Exp $
#

PORTNAME=	apgl
PORTVERSION=	0.7.1
CATEGORIES=	math python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	wen@FreeBSD.org
COMMENT=	A fast python graph library with some machine learning features

BUILD_DEPENDS=	${PYNUMPY} \
		${PYTHON_PKGNAMEPREFIX}scipy>0.7.0:${PORTSDIR}/science/py-scipy
RUN_DEPENDS:=	${BUILD_DEPENDS}

USE_PYTHON=		yes
USE_PYDISTUTILS=	easy_install

.include <bsd.port.mk>
