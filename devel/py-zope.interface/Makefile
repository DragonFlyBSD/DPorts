# Created by: Neal Nelson <neal@nelson.name>
# $FreeBSD: head/devel/py-zope.interface/Makefile 403670 2015-12-13 13:46:28Z rm $

PORTNAME=	zope.interface
PORTVERSION=	4.1.3
CATEGORIES=	devel python zope
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DIST_SUBDIR=	zope

MAINTAINER=	zope@FreeBSD.org
COMMENT=	Interfaces for Python

LICENSE=	ZPL21
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

USES=		python
USE_PYTHON=	autoplist distutils

post-install:
	${STRIP_CMD} ${STAGEDIR}${PYTHON_SITELIBDIR}/zope/interface/_zope_interface_coptimizations.so

.include <bsd.port.mk>
