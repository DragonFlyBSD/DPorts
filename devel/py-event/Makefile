# Created by: Alexander Botero-Lowry <alexbl@FreeBSD.org>
# $FreeBSD: devel/py-event/Makefile 327724 2013-09-20 17:13:42Z bapt $

PORTNAME=	event
PORTVERSION=	0.3
PORTREVISION=	6
CATEGORIES=	devel net python
MASTER_SITES=	${MASTER_SITE_GOOGLE_CODE}
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	py${PORTNAME}-${PORTVERSION}

MAINTAINER=	clsung@FreeBSD.org
COMMENT=	Python bindings for libevent

LIB_DEPENDS=	event-1.4:${PORTSDIR}/devel/libevent

PROJECTHOST=	pyevent
USE_PYTHON=	yes
USE_PYDISTUTILS=	yes

PLIST_FILES=	%%PYTHON_SITELIBDIR%%/event.so

NO_STAGE=	yes
.include <bsd.port.mk>
