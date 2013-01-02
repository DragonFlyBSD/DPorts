# Created by: Kubilay Kocak <koobs.freebsd@gmail.com>
# $FreeBSD: ports/databases/py-htsql-mysql/Makefile,v 1.3 2012/11/17 05:55:22 svnexp Exp $

PORTNAME=	htsql-mysql
PORTVERSION=	2.3.2
CATEGORIES=	databases python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	${PORTNAME:tu}-${PORTVERSION}

MAINTAINER=	koobs.freebsd@gmail.com
COMMENT=	MySQL backend for HTSQL

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}htsql>2.3:${PORTSDIR}/databases/py-htsql \
		${PYTHON_PKGNAMEPREFIX}MySQLdb>0:${PORTSDIR}/databases/py-MySQLdb

USE_PYTHON=		2.6-2.7
USE_PYDISTUTILS=	easy_install
PYDISTUTILS_PKGNAME=	${PORTNAME:tu}

.include <bsd.port.mk>
