# New ports collection makefile for:    py-cmemcache
# Date created:                         17 Jan 2009
# Whom:                                 Qing Feng <qingfeng@douban.com>
#
# $FreeBSD: ports/databases/py-cmemcache/Makefile,v 1.4 2012/11/17 05:55:21 svnexp Exp $
#

PORTNAME=	cmemcache
PORTVERSION=	0.95
CATEGORIES=	databases python
MASTER_SITES=	http://gijsbert.org/downloads/cmemcache/
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	qingfeng@douban.com
COMMENT=	Python API for memcached, a distributed memory cache daemon

LIB_DEPENDS=	memcache:${PORTSDIR}/databases/libmemcache

USE_BZIP2=	yes
USE_PYTHON=		yes
USE_PYDISTUTILS=	yes

.include <bsd.port.mk>
