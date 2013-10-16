# $FreeBSD: www/trytond_google_maps/Makefile 327776 2013-09-20 23:36:50Z bapt $

PORTNAME=	trytond_google_maps
PORTVERSION=	2.4.0
CATEGORIES=	www finance python
MASTER_SITES=	http://downloads.tryton.org/${PORTVERSION:R}/

MAINTAINER=	matthias@petermann.it
COMMENT=	Tryton Application Platform (Google Maps Module)

LICENSE=	GPLv3

RUN_DEPENDS=	trytond>=2.4.0:${PORTSDIR}/finance/trytond \
		trytond_party>=2.4.0:${PORTSDIR}/finance/trytond_party

CONFLICTS=	trytond_google_maps-2.[68].*

USE_PYTHON=	yes
USE_PYDISTUTILS=easy_install

NO_STAGE=	yes
.include <bsd.port.mk>
