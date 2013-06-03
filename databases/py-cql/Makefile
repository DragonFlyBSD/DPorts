# Created by: Radim Kolar <hsn@sendmail.cz>
# $FreeBSD: databases/py-cql/Makefile 318489 2013-05-19 05:19:35Z bdrewery $

PORTNAME=	cql
PORTVERSION=	1.4.0
CATEGORIES=	databases python
MASTER_SITES=	http://cassandra-dbapi2.apache-extras.org.codespot.com/files/
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
#DISTNAME=	cql-${PORTVERSION}

MAINTAINER=	hsn@sendmail.cz
COMMENT=	Python DB-API 2.0 client interface for Cassandra

LICENSE=	AL2

RUN_DEPENDS=	${PYTHON_SITELIBDIR}/thrift/Thrift.py:${PORTSDIR}/devel/py-thrift

USE_PYTHON=		yes
USE_PYDISTUTILS=	yes
PYDISTUTILS_PKGNAME=	cql

.include <bsd.port.mk>
