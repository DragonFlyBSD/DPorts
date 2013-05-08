# Created by: Kubilay Kocak <koobs@FreeBSD.org>
# $FreeBSD: databases/py-htsql-mysql/Makefile 316728 2013-04-28 14:34:12Z koobs $

PORTNAME=	htsql-mysql
PORTVERSION=	2.3.3
CATEGORIES=	databases python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	${PORTNAME:tu}-${PORTVERSION}

MAINTAINER=	koobs@FreeBSD.org
COMMENT=	Database Query Language (MySQL Backend for HTSQL)

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}htsql>2.3:${PORTSDIR}/databases/py-htsql \
		${PYTHON_PKGNAMEPREFIX}MySQLdb>0:${PORTSDIR}/databases/py-MySQLdb

USE_PYTHON=		2.6-2.7
USE_PYDISTUTILS=	easy_install
PYDISTUTILS_PKGNAME=	${PORTNAME:tu}

.include <bsd.port.mk>
