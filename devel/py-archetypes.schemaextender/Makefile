# $FreeBSD: devel/py-archetypes.schemaextender/Makefile 315489 2013-03-28 17:23:24Z rm $

PORTNAME=	archetypes.schemaextender
PORTVERSION=	2.1.2
CATEGORIES=	devel python zope
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	zope@FreeBSD.org
COMMENT=	Dynamically extend Archetypes schemas with named adapters

LICENSE=	GPLv2

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}plone.uuid>=0:${PORTSDIR}/www/py-plone.uuid

DIST_SUBDIR=	zope
USE_PYTHON=	yes
USE_PYDISTUTILS=	easy_install
USE_ZIP=	yes

.include <bsd.port.mk>
