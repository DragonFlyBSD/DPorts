# Created by: Steven Kreuzer <skreuzer@FreeBSD.org>
# $FreeBSD: devel/py-clonedigger/Makefile 327724 2013-09-20 17:13:42Z bapt $

PORTNAME=	clonedigger
PORTVERSION=	1.0.11
PORTREVISION=	1
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTVERSION=	${PORTVERSION}-beta

MAINTAINER=	skreuzer@FreeBSD.org
COMMENT=	Detect similar code in Python and Java programs

LICENSE=	GPLv2

USE_PYTHON=	yes
USE_PYDISTUTILS=	easy_install
PYEASYINSTALL_EGG=	${PORTNAME}-${DISTVERSION:C/-/_/g}-py${PYTHON_VER}.egg
PYDISTUTILS_PKGVERSION=	${PORTVERSION}-beta

NO_STAGE=	yes
.include <bsd.port.mk>
