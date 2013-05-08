# Created by: Cheng-Lung Sung <clsung@FreeBSD.org>
# $FreeBSD: devel/py-zope.component/Makefile 315934 2013-04-17 06:44:00Z rm $

PORTNAME=	zope.component
PORTVERSION=	3.12.0
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	zope@FreeBSD.org
COMMENT=	Zope Component Architecture

LICENSE=	ZPL21

BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}zope.interface>=3.8.0:${PORTSDIR}/devel/py-zope.interface \
		${PYTHON_PKGNAMEPREFIX}zope.event>=0:${PORTSDIR}/devel/py-zope.event
RUN_DEPENDS:=	${BUILD_DEPENDS}

DIST_SUBDIR=	zope
USE_PYTHON=	yes
USE_PYDISTUTILS=	easy_install

.include <bsd.port.mk>
