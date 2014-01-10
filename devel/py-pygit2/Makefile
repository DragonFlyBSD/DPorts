# Created by: William Grzybowski <wg@FreeBSD.org>
# $FreeBSD: devel/py-pygit2/Makefile 337478 2013-12-26 10:10:59Z wg $

PORTNAME=	pygit2
PORTVERSION=	0.20.1
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	wg@FreeBSD.org
COMMENT=	Python bindings for libgit2

LICENSE=	GPLv2

LIB_DEPENDS=	libgit2.so.0.20.0:${PORTSDIR}/devel/libgit2

USE_PYTHON=	yes
USE_PYDISTUTILS=yes
PYDISTUTILS_AUTOPLIST=	yes

.include <bsd.port.mk>
