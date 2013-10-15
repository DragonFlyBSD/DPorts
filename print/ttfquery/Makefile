# Created by: ijliao
# $FreeBSD: print/ttfquery/Makefile 327765 2013-09-20 22:43:59Z bapt $

PORTNAME=	ttfquery
PORTVERSION=	1.0.5
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
