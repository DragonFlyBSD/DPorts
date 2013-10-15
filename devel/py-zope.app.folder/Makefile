# $FreeBSD: devel/py-zope.app.folder/Makefile 327992 2013-09-23 12:52:16Z rm $

PORTNAME=	zope.app.folder
PORTVERSION=	3.5.2
CATEGORIES=	devel python zope
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	zope@FreeBSD.org
COMMENT=	Folder Content Type for Zope 3

LICENSE=	ZPL21

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}zope.container>=0:${PORTSDIR}/devel/py-zope.container \
		${PYTHON_PKGNAMEPREFIX}zope.site>=0:${PORTSDIR}/devel/py-zope.site \
		${PYTHON_PKGNAMEPREFIX}zope.app.content>=0:${PORTSDIR}/devel/py-zope.app.content

DIST_SUBDIR=	zope
USE_PYTHON=	yes
USE_PYDISTUTILS=easy_install

NO_STAGE=	yes

.include <bsd.port.mk>
