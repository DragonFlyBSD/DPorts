# New ports collection makefile for:	py-manuel
# Date created:				Nov 10, 2011
# Whom:					Ruslan Mahmatkhanov <cvs-src@yandex.ru>
#
# $FreeBSD: ports/devel/py-manuel/Makefile,v 1.4 2012/11/17 05:56:48 svnexp Exp $
#

PORTNAME=	manuel
PORTVERSION=	1.6.0
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DIST_SUBDIR=	zope

MAINTAINER=	rm@FreeBSD.org
COMMENT=	Lets you build tested documentation

LICENSE=	ZPL21

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}six>=0:${PORTSDIR}/devel/py-six

# Python3 ready
USE_PYTHON=	yes
USE_PYDISTUTILS=easy_install

.include <bsd.port.mk>
