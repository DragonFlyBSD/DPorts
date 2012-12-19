# New ports collection makefile for:	py-grequests
# Date created:		2012-05-31
# Whom:			koobs <koobs.freebsd@gmail.com>
#
# $FreeBSD: ports/www/py-grequests/Makefile,v 1.2 2012/11/17 06:03:00 svnexp Exp $
#

PORTNAME=	grequests
PORTVERSION=	0.1.0
CATEGORIES=	www python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	koobs.freebsd@gmail.com
COMMENT=	Pythons Requests + Gevent

LICENSE=	BSD

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}gevent>0:${PORTSDIR}/devel/py-gevent \
		${PYTHON_PKGNAMEPREFIX}requests>0:${PORTSDIR}/www/py-requests

USE_PYTHON=	yes
USE_PYDISTUTILS=yes

.include <bsd.port.mk>
