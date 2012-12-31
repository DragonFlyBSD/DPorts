# Created by:	Matthias Petermann<matthias@petermann.it>
# $FreeBSD: ports/french/trytond_account_fr/Makefile,v 1.2 2012/11/17 05:57:28 svnexp Exp $

PORTNAME=	trytond_account_fr
PORTVERSION=	2.4.0
CATEGORIES=	french finance python
MASTER_SITES=	http://downloads2.tryton.org/${PORTVERSION:R}/

MAINTAINER=	matthias@petermann.it
COMMENT=	The chart of account which is used in France

LICENSE=	GPLv3

RUN_DEPENDS=	trytond>=2.4.0:${PORTSDIR}/finance/trytond \
		trytond_account>=2.4.1:${PORTSDIR}/finance/trytond_account

USE_PYTHON=	yes
USE_PYDISTUTILS=easy_install

.include <bsd.port.mk>
