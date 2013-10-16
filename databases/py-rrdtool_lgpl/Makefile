# Created by: Hye-Shik Chang
# $FreeBSD: databases/py-rrdtool_lgpl/Makefile 328563 2013-09-28 11:13:15Z mva $

PORTNAME=	rrdtool_lgpl
PORTVERSION=	1.0b1
PORTREVISION=	3
CATEGORIES=	databases python
MASTER_SITES=	SF/py-rrdtool/py-rrdtool/${PORTVERSION}
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	py-rrdtool-${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Python interface to RRDTool, the graphing and logging utility

LIB_DEPENDS=	librrd.so:${PORTSDIR}/databases/rrdtool

USE_PYTHON=	-2.7
USE_PYDISTUTILS=yes
PYDISTUTILS_AUTOPLIST=	yes
PYDISTUTILS_PKGNAME=	py-rrdtool

LIBDIR?=	${LOCALBASE}/lib # directory where librrd.so lives

.include <bsd.port.mk>
