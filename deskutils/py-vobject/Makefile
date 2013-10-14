# Created by: Andrew Pantyukhin <infofarmer@FreeBSD.org>
# $FreeBSD: deskutils/py-vobject/Makefile 327718 2013-09-20 16:21:37Z bapt $

PORTNAME=	vobject
PORTVERSION=	0.8.1c
PORTREVISION=	1
CATEGORIES=	deskutils python
MASTER_SITES=	http://vobject.skyhouseconsulting.com/
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	jun-g@daemonfreaks.com
COMMENT=	ICalendar library

RUN_DEPENDS=	py*-dateutil>=1.1:${PORTSDIR}/devel/py-dateutil

USE_PYTHON=	2.5+
USE_PYDISTUTILS=easy_install

NO_STAGE=	yes
.include <bsd.port.mk>
