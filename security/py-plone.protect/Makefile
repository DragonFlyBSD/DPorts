# $FreeBSD: security/py-plone.protect/Makefile 328002 2013-09-23 13:42:48Z rm $

PORTNAME=	plone.protect
PORTVERSION=	2.0.2
CATEGORIES=	security python zope
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	zope@FreeBSD.org
COMMENT=	Security for browser forms

LICENSE=	BSD

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}plone.keyring>1.0:${PORTSDIR}/security/py-plone.keyring \
		${PYTHON_PKGNAMEPREFIX}zope.component>=0:${PORTSDIR}/devel/py-zope.component \
		${PYTHON_PKGNAMEPREFIX}zope.interface>=0:${PORTSDIR}/devel/py-zope.interface

DIST_SUBDIR=	zope
USE_PYTHON=	yes
USE_PYDISTUTILS=easy_install
USE_ZIP=	yes
#USES=		zope

NO_STAGE=	yes

.include <bsd.port.mk>
