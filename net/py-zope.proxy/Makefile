# Created by: Wen Heping <wenheping@gmail.com>
# $FreeBSD: net/py-zope.proxy/Makefile 327992 2013-09-23 12:52:16Z rm $

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

NO_STAGE=	yes

.include <bsd.port.mk>
