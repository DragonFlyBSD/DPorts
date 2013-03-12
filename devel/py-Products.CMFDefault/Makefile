# $FreeBSD: devel/py-Products.CMFDefault/Makefile 313737 2013-03-09 17:43:38Z miwi $

PORTNAME=	Products.CMFDefault
PORTVERSION=	2.2.2
PORTREVISION=	1
CATEGORIES=	devel python zope
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	zope@FreeBSD.org
COMMENT=	Default product for the Zope Content Management Framework

LICENSE=	ZPL21

BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}eggtestinfo>0:${PORTSDIR}/devel/py-eggtestinfo
RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}five.formlib>=1.0.2:${PORTSDIR}/devel/py-five.formlib \
		${PYTHON_PKGNAMEPREFIX}Products.CMFCore>=0:${PORTSDIR}/devel/py-Products.CMFCore \
		${PYTHON_PKGNAMEPREFIX}Products.GenericSetup>=0:${PORTSDIR}/devel/py-Products.GenericSetup

DIST_SUBDIR=	zope
USE_PYTHON=	yes
USE_PYDISTUTILS=	easy_install

.include <bsd.port.mk>
