# Created by: Steven Kreuzer <skreuzer@FreeBSD.org>
# $FreeBSD: ports/devel/py-clonedigger/Makefile,v 1.1 2012/12/17 16:18:03 svnexp Exp $

PORTNAME=	clonedigger
PORTVERSION=	1.0.11
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

.include <bsd.port.mk>
