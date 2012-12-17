# New ports collection makefile for:	py-GitPython
# Date created:		2006-07-18
# Whom:			Wen Heping <wenheping@gmail.com>
#
# $FreeBSD: ports/devel/py-gitpython/Makefile,v 1.6 2012/11/17 05:56:47 svnexp Exp $
#

PORTNAME=	GitPython
PORTVERSION=	0.3.1
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Python Git Library

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}gitdb>0:${PORTSDIR}/devel/py-gitdb

USE_PYTHON=	yes
USE_PYDISTUTILS=easy_install

.include <bsd.port.mk>
