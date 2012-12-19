# New ports collection makefile for:	py-zopeproxy
# Date created:		22 Nov, 2008
# Whom:			Wen Heping <wenheping@gmail.com>
#
# $FreeBSD: ports/net/py-zope.proxy/Makefile,v 1.12 2012/11/17 06:00:17 svnexp Exp $
#

PORTNAME=	zope.proxy
PORTVERSION=	3.6.1
PORTREVISION=	3
CATEGORIES=	net python zope
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	zope@FreeBSD.org
COMMENT=	Generic Transparent Proxies

BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}zope.interface>=3.3.0:${PORTSDIR}/devel/py-zope.interface
RUN_DEPENDS:=	${BUILD_DEPENDS}

USE_ZIP=	yes
USE_PYTHON=	2.5+
USE_PYDISTUTILS=	easy_install
PYEASYINSTALL_ARCHDEP=	yes

.include <bsd.port.mk>
