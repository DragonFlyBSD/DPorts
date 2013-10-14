# Created by: Wen Heping <wenheping@gmail.com>
# $FreeBSD: devel/py-zope.exceptions/Makefile 327992 2013-09-23 12:52:16Z rm $

PORTNAME=	zope.exceptions
PORTVERSION=	4.0.0.1
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DIST_SUBDIR=	zope

MAINTAINER=	zope@FreeBSD.org
COMMENT=	General Zope Exceptions

LICENSE=	ZPL21

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}zope.interface>0:${PORTSDIR}/devel/py-zope.interface

# Python3 ready
USE_PYTHON=	yes
USE_PYDISTUTILS=easy_install

NO_STAGE=	yes

.include <bsd.port.mk>
