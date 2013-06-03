# $FreeBSD: finance/trytond_account_invoice/Makefile 318482 2013-05-19 03:57:57Z wen $

PORTNAME=	trytond_account_invoice
PORTVERSION=	2.4.2
CATEGORIES=	finance python
MASTER_SITES=	http://downloads.tryton.org/${PORTVERSION:R}/

MAINTAINER=	matthias@petermann.it
COMMENT=	Tryton Application Platform (Account Invoice Module)

LICENSE=	GPLv3

RUN_DEPENDS=	trytond>=2.4.0:${PORTSDIR}/finance/trytond \
		trytond_account_product>=2.4.1:${PORTSDIR}/finance/trytond_account_product

CONFLICTS=	trytond_account_invoice-2.[68].*

USE_PYTHON=	yes
USE_PYDISTUTILS=easy_install

.include <bsd.port.mk>
