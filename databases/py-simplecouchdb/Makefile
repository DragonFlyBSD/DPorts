# New ports collection makefile for:	simplecouchdb
# Date created:		2009-02-02
# Whom:			Wen Heping <wenheping@gmail.com>
#
# $FreeBSD: ports/databases/py-simplecouchdb/Makefile,v 1.5 2012/11/17 05:55:23 svnexp Exp $
#

PORTNAME=	simplecouchdb
PORTVERSION=	0.9.26
CATEGORIES=	databases python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	py-${PORTNAME}-${PORTVERSION}

MAINTAINER=	wenheping@gmail.com
COMMENT=	Simple Library to Allow Python Applications to Use CouchDB

BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}httplib2>0:${PORTSDIR}/www/py-httplib2 \
		${PYTHON_PKGNAMEPREFIX}py-restclient>0:${PORTSDIR}/www/py-py-restclient
RUN_DEPENDS:=	${BUILD_DEPENDS}

USE_PYTHON=		yes
USE_PYDISTUTILS=	easy_install
PYDISTUTILS_PKGNAME=	py_${PORTNAME}

.include <bsd.port.mk>
