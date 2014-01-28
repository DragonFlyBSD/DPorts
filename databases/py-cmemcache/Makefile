# Created by: Qing Feng <qingfeng@douban.com>
# $FreeBSD: databases/py-cmemcache/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	cmemcache
PORTVERSION=	0.95
CATEGORIES=	databases python
MASTER_SITES=	http://gijsbert.org/downloads/cmemcache/
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	qingfeng@douban.com
COMMENT=	Python API for memcached, a distributed memory cache daemon

LIB_DEPENDS=	libmemcache.so:${PORTSDIR}/databases/libmemcache

USE_BZIP2=	yes
USE_PYTHON=		yes
USE_PYDISTUTILS=	yes

NO_STAGE=	yes
.include <bsd.port.mk>
