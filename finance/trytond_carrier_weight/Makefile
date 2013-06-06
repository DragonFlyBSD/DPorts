# $FreeBSD: finance/trytond_carrier_weight/Makefile 318514 2013-05-19 11:55:09Z wen $

PORTNAME=	trytond_carrier_weight
PORTVERSION=	2.4.0
CATEGORIES=	finance python
MASTER_SITES=	http://downloads.tryton.org/${PORTVERSION:R}/

MAINTAINER=	matthias@petermann.it
COMMENT=	Tryton Application Platform (Carrier Weight Module)

LICENSE=	GPLv3

RUN_DEPENDS=	trytond>=2.4.0:${PORTSDIR}/finance/trytond \
		trytond_product_measurements>=2.4.0:${PORTSDIR}/finance/trytond_product_measurements \
		trytond_carrier>=2.4.1:${PORTSDIR}/finance/trytond_carrier

CONFLICTS=	trytond_carrier_weight-2.[68].*

USE_PYTHON=	yes
USE_PYDISTUTILS=easy_install

.include <bsd.port.mk>
