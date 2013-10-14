# Created by: Peter Schuller <peter.schuller@infidyne.com>
# $FreeBSD: devel/py-gevent/Makefile 327724 2013-09-20 17:13:42Z bapt $

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
USE_PYDISTUTILS=yes
PYDISTUTILS_BUILDARGS=	-I${LOCALBASE}/include -L${LOCALBASE}/lib

NO_STAGE=	yes
.include <bsd.port.mk>
