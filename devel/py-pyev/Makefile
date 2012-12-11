# New ports collection makefile for:	py-pyev
# Date created:		2012-05-31
# Whom:			Denis Generalov <gd@rambler-co.ru>
#
# $FreeBSD: ports/devel/py-pyev/Makefile,v 1.2 2012/11/17 05:56:49 svnexp Exp $
#

PORTNAME=	pyev
PORTVERSION=	0.8.1
DISTVERSIONSUFFIX=	-4.04
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
MASTER_SITE_SUBDIR=	source/p/pyev
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	gd@rambler-co.ru
COMMENT=	Python libev interface

LICENSE=	BSD GPLv1
LICENSE_COMB=	multi

LIB_DEPENDS=	ev.4:${PORTSDIR}/devel/libev

USE_PYTHON=	yes
USE_PYDISTUTILS=yes
PYDISTUTILS_PKGVERSION=${PORTVERSION}${DISTVERSIONSUFFIX}

PLIST_FILES=	%%PYTHON_SITELIBDIR%%/pyev.so

.include <bsd.port.mk>
