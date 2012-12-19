# New ports collection makefile for:	py-repoze.tm2
# Date created:		9th August,2009
# Whom:	      		Wen Heping <wenheping@gmail.com>
#
# $FreeBSD: ports/devel/py-repoze.tm2/Makefile,v 1.7 2012/11/17 05:56:50 svnexp Exp $
#

PORTNAME=	repoze.tm2
PORTVERSION=	1.0
PORTEPOCH=	1
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	wen@FreeBSD.org
COMMENT=	Zope-like transaction manager via WSGI middleware

BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}transaction>=1.0.0:${PORTSDIR}/devel/py-transaction
RUN_DEPENDS:=	${BUILD_DEPENDS}

USE_PYTHON=	yes
USE_PYDISTUTILS=	easy_install

.include <bsd.port.mk>
