# Created by: ijliao
# $FreeBSD: devel/py-simpleparse/Makefile 327724 2013-09-20 17:13:42Z bapt $

PORTNAME=	simpleparse
PORTVERSION=	2.1.1
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	SimpleParse-${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Python EBNF parser generator for use with mx.TextTools

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}mx-base>0:${PORTSDIR}/lang/py-mx-base

USE_PYTHON=	-2.7
USE_PYDISTUTILS=yes
PYDISTUTILS_PKGNAME=	SimpleParse

NO_STAGE=	yes
.include <bsd.port.mk>
