# Created by: Andrew Pantyukhin <infofarmer@FreeBSD.org>
# $FreeBSD: deskutils/py-vobject/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	vobject
PORTVERSION=	0.8.1c
PORTREVISION=	1
CATEGORIES=	deskutils python
MASTER_SITES=	http://vobject.skyhouseconsulting.com/
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	jun-g@daemonfreaks.com
COMMENT=	ICalendar library

RUN_DEPENDS=	py*-dateutil>=1.1:${PORTSDIR}/devel/py-dateutil

USE_PYTHON=	yes
USE_PYDISTUTILS=easy_install

NO_STAGE=	yes
.include <bsd.port.mk>
