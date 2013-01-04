# Created by:	Matthias Petermann<matthias@petermann.it>
# $FreeBSD: ports/finance/trytond_account_stock_anglo_saxon/Makefile,v 1.2 2012/11/17 05:57:26 svnexp Exp $

PORTNAME=	trytond_account_stock_anglo_saxon
PORTVERSION=	2.4.1
CATEGORIES=	finance python
MASTER_SITES=	http://downloads2.tryton.org/${PORTVERSION:R}/

MAINTAINER=	matthias@petermann.it
COMMENT=	Tryton Application Platform (Account Stock Anglo Saxon Module)

LICENSE=	GPLv3

RUN_DEPENDS=	trytond>=2.4.0:${PORTSDIR}/finance/trytond \
		trytond_account_invoice>=2.4.1:${PORTSDIR}/finance/trytond_account_invoice \
		trytond_account_stock_continental>=2.4.1:${PORTSDIR}/finance/trytond_account_stock_continental

USE_PYTHON=	yes
USE_PYDISTUTILS=easy_install

.include <bsd.port.mk>
