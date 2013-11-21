# Created by: Matthias Petermann <matthias@petermann-it.de>
# $FreeBSD: french/trytond_account_fr/Makefile 334207 2013-11-18 15:11:55Z bsam $

PORTNAME=	trytond_account_fr
PORTVERSION=	2.4.0
CATEGORIES=	french finance python
MASTER_SITES=	http://downloads.tryton.org/${PORTVERSION:R}/

MAINTAINER=	matthias@petermann.it
COMMENT=	Tryton Application Platform (French Account Chart)

LICENSE=	GPLv3

RUN_DEPENDS=	trytond>=2.4.0:${PORTSDIR}/finance/trytond \
		trytond_account>=2.4.1:${PORTSDIR}/finance/trytond_account

CONFLICTS=	trytond_account_fr-2.[68].*

USE_PYTHON=	yes
USE_PYDISTUTILS=easy_install

.include <bsd.port.mk>
