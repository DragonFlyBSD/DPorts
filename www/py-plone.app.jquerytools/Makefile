# $FreeBSD: www/py-plone.app.jquerytools/Makefile 328002 2013-09-23 13:42:48Z rm $

PORTNAME=	plone.app.jquerytools
PORTVERSION=	1.5.6
CATEGORIES=	www python zope
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	zope@FreeBSD.org
COMMENT=	jQuery Tools integration for Plone

LICENSE=	GPLv2

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}zope.component>=0:${PORTSDIR}/devel/py-zope.component \
		${PYTHON_PKGNAMEPREFIX}Products.CMFCore>=0:${PORTSDIR}/devel/py-Products.CMFCore \
		${PYTHON_PKGNAMEPREFIX}Products.GenericSetup>=0:${PORTSDIR}/devel/py-Products.GenericSetup

DIST_SUBDIR=	zope
USE_PYTHON=	-2.7
USE_PYDISTUTILS=easy_install
USE_ZIP=	yes
USES=		zope

NO_STAGE=	yes

.include <bsd.port.mk>
