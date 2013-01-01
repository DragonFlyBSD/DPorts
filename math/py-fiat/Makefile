# New ports collection makefile for:	py-fiat
# Date created:				13 April 2012
# Whom:					Jason Bacon <jwbacon@tds.net>
#
# $FreeBSD: ports/math/py-fiat/Makefile,v 1.3 2012/11/17 05:59:29 svnexp Exp $
#

PORTNAME=	fiat
PORTVERSION=	1.0.0
PORTREVISION=	1
CATEGORIES=	math python
MASTER_SITES=	https://launchpad.net/${PORTNAME}/1.0.x/${PORTVERSION}/+download/
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	jwbacon@tds.net
COMMENT=	FInite element Automatic Tabulator

LICENSE=	LGPL3

BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}scientific>=0:${PORTSDIR}/math/py-scientific
RUN_DEPENDS:=	${BUILD_DEPENDS}

USE_PYTHON=	-2.7
USE_PYDISTUTILS=	yes
PYDISTUTILS_PKGNAME=	FIAT

FETCH_ARGS=	-F

.include <bsd.port.mk>
