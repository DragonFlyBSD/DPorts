# Created by: ijliao
# $FreeBSD: print/ttfquery/Makefile 331644 2013-10-26 00:52:33Z gerald $

PORTNAME=	ttfquery
PORTVERSION=	1.0.5
PORTREVISION=	1
CATEGORIES=	print
MASTER_SITES=	CHEESESHOP
DISTNAME=	TTFQuery-${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	FontTools-based package for querying system fonts

LICENSE=	BSD
LICENSE_FILE=	${WRKSRC}/license.txt

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}fonttools>0:${PORTSDIR}/print/py-fonttools \
		${PYNUMPY}

USE_PYTHON=	yes
USE_PYDISTUTILS=	easy_install
PYDISTUTILS_PKGNAME=	TTFQuery

NO_STAGE=	yes
.include <bsd.port.mk>
