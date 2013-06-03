# $FreeBSD: finance/trytond_purchase/Makefile 318498 2013-05-19 08:49:40Z wen $

PORTNAME=	trytond_purchase
PORTVERSION=	2.4.3
CATEGORIES=	finance python
MASTER_SITES=	http://downloads.tryton.org/${PORTVERSION:R}/

MAINTAINER=	matthias@petermann.it
COMMENT=	Tryton Application Platform (Purchase Module)

LICENSE=	GPLv3

RUN_DEPENDS=	trytond>=2.4.0:${PORTSDIR}/finance/trytond \
		trytond_stock>=2.4.0:${PORTSDIR}/finance/trytond_stock \
		trytond_account_invoice>=2.4.0:${PORTSDIR}/finance/trytond_account_invoice

CONFLICTS=	trytond_purchase-2.[68].*

USE_PYTHON=	yes
USE_PYDISTUTILS=easy_install

.include <bsd.port.mk>
