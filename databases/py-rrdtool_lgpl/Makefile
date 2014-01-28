# Created by: Hye-Shik Chang
# $FreeBSD: databases/py-rrdtool_lgpl/Makefile 339634 2014-01-13 21:00:02Z rene $

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

USE_PYTHON=	2
USE_PYDISTUTILS=yes
PYDISTUTILS_AUTOPLIST=	yes
PYDISTUTILS_PKGNAME=	py-rrdtool

LIBDIR?=	${LOCALBASE}/lib # directory where librrd.so lives

.include <bsd.port.mk>
