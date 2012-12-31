# Created by: Matthias Petermann<matthias@petermann.it>
# $FreeBSD: ports/finance/trytond_purchase_invoice_line_standalone/Makefile,v 1.2 2012/11/17 05:57:27 svnexp Exp $

PORTNAME=	trytond_purchase_invoice_line_standalone
PORTVERSION=	2.4.0
CATEGORIES=	finance python
MASTER_SITES=	http://downloads2.tryton.org/${PORTVERSION:R}/

MAINTAINER=	matthias@petermann.it
COMMENT=	Tryton Application Platform (Purchase Invoice Line Standalone Module)

LICENSE=	GPLv3

RUN_DEPENDS=	trytond>=2.4.0:${PORTSDIR}/finance/trytond \
		trytond_purchase>=2.4.0:${PORTSDIR}/finance/trytond_purchase \
		trytond_account_invoice_line_standalone>=2.4.1:${PORTSDIR}/finance/trytond_account_invoice_line_standalone

USE_PYTHON=	yes
USE_PYDISTUTILS=easy_install

.include <bsd.port.mk>
