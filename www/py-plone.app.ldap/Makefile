# Created by: Lawrence Stewart <lstewart@freebsd.org>
# $FreeBSD: www/py-plone.app.ldap/Makefile 315489 2013-03-28 17:23:24Z rm $

PORTNAME=	plone.app.ldap
PORTVERSION=	1.3.0
CATEGORIES=	www python zope
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	zope@FreeBSD.org
COMMENT=	LDAP control panel for Plone

LICENSE=	GPLv2

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}Products.CMFCore>=2.1.0:${PORTSDIR}/devel/py-Products.CMFCore \
		${PYTHON_PKGNAMEPREFIX}Products.PloneLDAP>=1.0:${PORTSDIR}/www/py-Products.PloneLDAP

DIST_SUBDIR=	zope
USE_PYTHON=	-2.7
USE_PYDISTUTILS=easy_install
USE_ZIP=	yes

.include <bsd.port.mk>
