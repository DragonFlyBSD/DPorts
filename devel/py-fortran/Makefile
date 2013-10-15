# Created by: ijliao
# $FreeBSD: devel/py-fortran/Makefile 327724 2013-09-20 17:13:42Z bapt $

PORTNAME=	fortran
PORTVERSION=	8.5.3
CATEGORIES=	devel python
MASTER_SITES=	SF/py${PORTNAME}/py${PORTNAME}/8.5
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	Pyfort-${PORTVERSION}

MAINTAINER=	wenheping@gmail.com
COMMENT=	Creating extensions to the Python language with Fortran routines

RUN_DEPENDS=	${PYNUMERIC}

USE_PYTHON=	yes
USE_PYDISTUTILS=	yes
PYDISTUTILS_PKGNAME=	Pyfort

NO_STAGE=	yes
.include <bsd.port.mk>
