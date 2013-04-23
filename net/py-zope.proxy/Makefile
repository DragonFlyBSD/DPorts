# Created by: Wen Heping <wenheping@gmail.com>
# $FreeBSD: net/py-zope.proxy/Makefile 316000 2013-04-17 18:01:53Z rm $

PORTNAME=	zope.proxy
PORTVERSION=	4.1.3
CATEGORIES=	net python zope
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DIST_SUBDIR=	zope

MAINTAINER=	zope@FreeBSD.org
COMMENT=	Generic Transparent Proxies

LICENSE=	ZPL21

BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}zope.interface>=3.3.0:${PORTSDIR}/devel/py-zope.interface

USE_ZIP=	yes
USE_PYTHON=	yes
USE_PYDISTUTILS=	easy_install
PYEASYINSTALL_ARCHDEP=	yes

.include <bsd.port.mk>
