# New ports collection makefile for:	py-mssql
# Date created:		5 March 2004
# Whom:			Hye-Shik Chang <perky@FreeBSD.org>
#
# $FreeBSD: ports/databases/py-mssql/Makefile,v 1.16 2012/11/17 05:55:22 svnexp Exp $
#

PORTNAME=	mssql
PORTVERSION=	1.0.2
CATEGORIES=	databases python
MASTER_SITES=	SF/py${PORTNAME}/py${PORTNAME}/${PORTVERSION}
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	pymssql-${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Python database interface for simple MS-SQL access

LIB_DEPENDS=	sybdb.5:${PORTSDIR}/databases/freetds-msdblib

USE_PYTHON=	2.5+
USE_PYDISTUTILS=yes
PYDISTUTILS_PKGNAME=	pymssql

.include <bsd.port.mk>
