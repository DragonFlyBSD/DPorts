# New ports collection makefile for:	py-zope.password
# Date created:				Nov 9, 2011
# Whom:					Ruslan Mahmatkhanov <cvs-src@yandex.ru>
#
# $FreeBSD: ports/security/py-zope.password/Makefile,v 1.4 2012/11/17 06:01:17 svnexp Exp $
#

PORTNAME=	zope.password
PORTVERSION=	3.6.1
CATEGORIES=	security python zope
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DIST_SUBDIR=	zope

MAINTAINER=	zope@FreeBSD.org
COMMENT=	Password encoding and checking utilities

LICENSE=	ZPL21

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}zope.component>=0:${PORTSDIR}/devel/py-zope.component \
		${PYTHON_PKGNAMEPREFIX}zope.configuration>=0:${PORTSDIR}/devel/py-zope.configuration \
		${PYTHON_PKGNAMEPREFIX}zope.interface>=0:${PORTSDIR}/devel/py-zope.interface

USE_PYTHON=	yes
USE_PYDISTUTILS=easy_install

.include <bsd.port.mk>
