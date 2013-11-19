# Created by: Matthias Petermann <matthias@petermann-it.de>
# $FreeBSD: finance/trytond_carrier/Makefile 334207 2013-11-18 15:11:55Z bsam $

PORTNAME=	trytond_carrier
PORTVERSION=	2.4.1
CATEGORIES=	finance python
MASTER_SITES=	http://downloads.tryton.org/${PORTVERSION:R}/

MAINTAINER=	matthias@petermann.it
COMMENT=	Tryton Application Platform (Carrier Module)

LICENSE=	GPLv3

RUN_DEPENDS=	trytond>=2.4.0:${PORTSDIR}/finance/trytond \
		trytond_party>=2.4.0:${PORTSDIR}/finance/trytond_party \
		trytond_product>=2.4.0:${PORTSDIR}/finance/trytond_product

CONFLICTS=	trytond_carrier-2.[68].*

USE_PYTHON=	yes
USE_PYDISTUTILS=easy_install

.include <bsd.port.mk>
