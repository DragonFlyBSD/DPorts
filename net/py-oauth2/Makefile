# New ports collection makefile for:	py-oauth2
# Date created:		                02 Mar,2011
# Whom:			                Cheng-Lung Sung <clsung@FreeBSD.org>
#
# $FreeBSD: ports/net/py-oauth2/Makefile,v 1.6 2012/11/17 06:00:16 svnexp Exp $
#

PORTNAME=	oauth2
PORTVERSION=	1.5.211
CATEGORIES=	net python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	clsung@FreeBSD.org
COMMENT=	Python library for OAuth version 1.0

LICENSE=	MIT

BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}httplib2>0:${PORTSDIR}/www/py-httplib2
RUN_DEPENDS:=	${BUILD_DEPENDS}

USE_PYTHON=	yes
USE_PYDISTUTILS=	easy_install

.include <bsd.port.mk>
