# $FreeBSD: devel/py-Products.GenericSetup/Makefile 315489 2013-03-28 17:23:24Z rm $

PORTNAME=	Products.GenericSetup
PORTVERSION=	1.7.3
CATEGORIES=	devel python zope
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	zope@FreeBSD.org
COMMENT=	Read Zope configuration state from profile dirs / tarballs

LICENSE=	ZPL21

BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}eggtestinfo>0:${PORTSDIR}/devel/py-eggtestinfo
RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}five.localsitemanager>=0:${PORTSDIR}/devel/py-five.localsitemanager \
		${PYTHON_PKGNAMEPREFIX}zope.formlib>=0:${PORTSDIR}/devel/py-zope.formlib

DIST_SUBDIR=	zope
USE_PYTHON=	-2.7
USE_PYDISTUTILS=	easy_install
USE_ZOPE=	yes

.include <bsd.port.mk>
