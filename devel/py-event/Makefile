# New ports collection makefile for:	py-event
# Date created:				23 Feb 2007
# Whom:					Alexander Botero-Lowry <alexbl@FreeBSD.org>
#
# $FreeBSD: ports/devel/py-event/Makefile,v 1.10 2012/11/17 05:56:46 svnexp Exp $

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

.include <bsd.port.mk>
