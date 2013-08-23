# Created by: Peter Schuller <peter.schuller@infidyne.com>
# $FreeBSD: devel/py-gevent/Makefile 325163 2013-08-21 17:42:57Z sunpoet $

PORTNAME=	gevent
PORTVERSION=	0.13.8
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Python co-routine networking library based on greenlet/libevent

LICENSE=	MIT

LIB_DEPENDS=	event:${PORTSDIR}/devel/libevent
RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}greenlet>=0:${PORTSDIR}/devel/py-greenlet

USE_PYTHON=	-2.7
USE_PYDISTUTILS=	yes
PYDISTUTILS_BUILDARGS=	-I${LOCALBASE}/include -L${LOCALBASE}/lib

.include <bsd.port.mk>
