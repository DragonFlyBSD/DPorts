# New ports collection makefile for:	py-igraph
# Date created:		2006-12-20
# Whom:			Li-Wen Hsu <lwhsu@lwhsu.org>
#
# $FreeBSD: ports/math/py-igraph/Makefile,v 1.13 2012/11/17 05:59:29 svnexp Exp $
#

PORTNAME=	igraph
PORTVERSION=	0.5.4
CATEGORIES=	math python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	python-${PORTNAME}-${PORTVERSION}

MAINTAINER=	lwhsu@FreeBSD.org
COMMENT=	High performance graph data structures and algorithms

BUILD_DEPENDS=	${LOCALBASE}/lib/libigraph.so:${PORTSDIR}/math/igraph
LIB_DEPENDS=	xml2.5:${PORTSDIR}/textproc/libxml2

USE_PYTHON=	yes
USE_PYDISTUTILS=	easy_install
PYEASYINSTALL_ARCHDEP=	yes
PYDISTUTILS_PKGNAME=	python_igraph

.include <bsd.port.mk>
