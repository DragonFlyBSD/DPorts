# New ports collection makefile for:	py-memcached
# Date created:		2004-04-16
# Whom:			michael johnson <ahze@ahze.net>
#
# $FreeBSD: ports/databases/py-memcached/Makefile,v 1.18 2012/11/17 05:55:22 svnexp Exp $
#

PORTNAME=	memcached
PORTVERSION=	1.48
CATEGORIES=	databases python
MASTER_SITES=	ftp://ftp.tummy.com/pub/python-memcached/ \
		ftp://ftp.tummy.com/pub/python-memcached/old-releases/ \
		LOCAL/sunpoet
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	python-${PORTNAME}-${PORTVERSION}

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Python API for memcached, a distributed memory cache daemon

USE_PYTHON=	yes
USE_PYDISTUTILS=easy_install
PYDISTUTILS_PKGNAME=	python-memcached

.include <bsd.port.mk>
