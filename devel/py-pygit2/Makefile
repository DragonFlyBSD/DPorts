# Created by: William Grzybowski <wg@FreeBSD.org>
# $FreeBSD: devel/py-pygit2/Makefile 329551 2013-10-06 12:19:11Z wg $

PORTNAME=	pygit2
PORTVERSION=	0.19.1
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	wg@FreeBSD.org
COMMENT=	Python bindings for libgit2

LIB_DEPENDS=	libgit2.so:${PORTSDIR}/devel/libgit2

USE_PYTHON=	yes
USE_PYDISTUTILS=yes
PYDISTUTILS_AUTOPLIST=	yes

.include <bsd.port.mk>
