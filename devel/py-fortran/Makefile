# Created by: ijliao
# $FreeBSD: devel/py-fortran/Makefile 340722 2014-01-22 17:00:46Z mat $

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
