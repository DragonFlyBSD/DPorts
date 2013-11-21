# Created by: Matthias Petermann <matthias@petermann-it.de>
# $FreeBSD: finance/trytond_dashboard/Makefile 334207 2013-11-18 15:11:55Z bsam $

PORTNAME=	trytond_dashboard
PORTVERSION=	2.4.1
CATEGORIES=	finance python
MASTER_SITES=	http://downloads.tryton.org/${PORTVERSION:R}/

MAINTAINER=	matthias@petermann.it
COMMENT=	Tryton Application Platform (Dashboard Module)

LICENSE=	GPLv3

RUN_DEPENDS=	trytond>=2.4.0:${PORTSDIR}/finance/trytond

CONFLICTS=	trytond_dashboard-2.[68].*

USE_PYTHON=	yes
USE_PYDISTUTILS=easy_install

.include <bsd.port.mk>
