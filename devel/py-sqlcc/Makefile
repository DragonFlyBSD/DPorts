# New ports collection makefile for:	py-sqlcc
# Date created:		2007-03-27
# Whom:			Thinker K.F. Li <thinker@branda.to>
#
# $FreeBSD: ports/devel/py-sqlcc/Makefile,v 1.5 2012/11/17 05:56:51 svnexp Exp $
#

PORTNAME=	sqlcc
PORTVERSION=	0.2
CATEGORIES=	devel databases python
MASTER_SITES=	http://pypi.python.org/packages/source/s/sqlcc/
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	A Python SQL Command Composer

RUN_DEPENDS=	${PYTHON_SITELIBDIR}/pythk/__init__.py:${PORTSDIR}/devel/pythk

USE_PYTHON=	yes
USE_PYDISTUTILS=yes

.include <bsd.port.mk>
