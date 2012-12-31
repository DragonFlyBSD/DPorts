# New ports collection makefile for:	trytond_carrier_percentage
# Date created:		08 September, 2012
# Whom:			Matthias Petermann<matthias@petermann.it>
#
# $FreeBSD: ports/finance/trytond_carrier_percentage/Makefile,v 1.2 2012/11/17 05:57:27 svnexp Exp $
#

PORTNAME=	trytond_carrier_percentage
PORTVERSION=	2.4.1
CATEGORIES=	finance python
MASTER_SITES=	http://downloads2.tryton.org/${PORTVERSION:R}/

MAINTAINER=	matthias@petermann.it
COMMENT=	Tryton Application Platform (Carrier Percentage Module)

LICENSE=	GPLv3

RUN_DEPENDS=	trytond>=2.4.0:${PORTSDIR}/finance/trytond \
		trytond_carrier>=2.4.1:${PORTSDIR}/finance/trytond_carrier \
		trytond_currency>=2.4.0:${PORTSDIR}/finance/trytond_currency

USE_PYTHON=	yes
USE_PYDISTUTILS=easy_install

.include <bsd.port.mk>
