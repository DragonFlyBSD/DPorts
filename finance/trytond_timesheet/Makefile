# New ports collection makefile for:	trytond_timesheet
# Date created:		08 September, 2012
# Whom:			Matthias Petermann<matthias@petermann.it>
#
# $FreeBSD: ports/finance/trytond_timesheet/Makefile,v 1.2 2012/11/17 05:57:28 svnexp Exp $
#

PORTNAME=	trytond_timesheet
PORTVERSION=	2.4.0
CATEGORIES=	finance python
MASTER_SITES=	http://downloads2.tryton.org/${PORTVERSION:R}/

MAINTAINER=	matthias@petermann.it
COMMENT=	Tryton Application Platform (Timesheet Module)

LICENSE=	GPLv3

RUN_DEPENDS=	trytond>=2.4.0:${PORTSDIR}/finance/trytond \
		trytond_company_work_time>=2.4.0:${PORTSDIR}/finance/trytond_company_work_time

USE_PYTHON=	yes
USE_PYDISTUTILS=easy_install

.include <bsd.port.mk>
