# New ports collection makefile for:	trytond_stock
# Date created:		07 September, 2012
# Whom:			Matthias Petermann<matthias@petermann.it>
#
# $FreeBSD: ports/finance/trytond_stock/Makefile,v 1.2 2012/11/17 05:57:27 svnexp Exp $
#

PORTNAME=	trytond_stock
PORTVERSION=	2.4.0
CATEGORIES=	finance python
MASTER_SITES=	http://downloads2.tryton.org/${PORTVERSION:R}/

MAINTAINER=	matthias@petermann.it
COMMENT=	Tryton Application Platform (Stock Module)

LICENSE=	GPLv3

RUN_DEPENDS=	trytond>=2.4.0:${PORTSDIR}/finance/trytond \
		trytond_party>=2.4.0:${PORTSDIR}/finance/trytond_party \
		trytond_product>=2.4.0:${PORTSDIR}/finance/trytond_product \
		trytond_company>=2.4.0:${PORTSDIR}/finance/trytond_company \
		trytond_currency>=2.4.0:${PORTSDIR}/finance/trytond_currency

USE_PYTHON=	yes
USE_PYDISTUTILS=easy_install

.include <bsd.port.mk>
