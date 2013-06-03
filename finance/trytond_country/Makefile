# $FreeBSD: finance/trytond_country/Makefile 318473 2013-05-19 02:05:22Z wen $

PORTNAME=	trytond_country
PORTVERSION=	2.4.0
CATEGORIES=	finance python
MASTER_SITES=	http://downloads.tryton.org/${PORTVERSION:R}/

MAINTAINER=	matthias@petermann.it
COMMENT=	Tryton Application Platform (Country Module)

LICENSE=	GPLv3

RUN_DEPENDS=	trytond>=2.4.0:${PORTSDIR}/finance/trytond

CONFLICTS=	trytond_country-2.[68].*

USE_PYTHON=	yes
USE_PYDISTUTILS=easy_install

.include <bsd.port.mk>
