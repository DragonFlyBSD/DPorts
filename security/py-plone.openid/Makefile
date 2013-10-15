# $FreeBSD: security/py-plone.openid/Makefile 328002 2013-09-23 13:42:48Z rm $

PORTNAME=	plone.openid
PORTVERSION=	2.0.1
CATEGORIES=	security python zope
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	zope@FreeBSD.org
COMMENT=	OpenID authentication support for PAS

LICENSE=	BSD

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}openid>=0:${PORTSDIR}/security/py-openid \
		${PYTHON_PKGNAMEPREFIX}transaction>=0:${PORTSDIR}/devel/py-transaction \
		${PYTHON_PKGNAMEPREFIX}Acquisition>=0:${PORTSDIR}/devel/py-Acquisition \
		${PYTHON_PKGNAMEPREFIX}Products.PluggableAuthService>=0:${PORTSDIR}/security/py-Products.PluggableAuthService \
		zodb${PYTHON_PKGNAMESUFFIX}>=0:${PORTSDIR}/databases/zodb3

DIST_SUBDIR=	zope
USE_PYTHON=	yes
USE_PYDISTUTILS=easy_install
USE_ZIP=	yes
#USES=		zope

NO_STAGE=	yes

.include <bsd.port.mk>
