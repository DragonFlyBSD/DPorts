# Created by: Matthias Petermann<matthias@petermann.it>
# $FreeBSD: ports/www/trytond_google_maps/Makefile,v 1.2 2012/11/17 06:03:09 svnexp Exp $

PORTNAME=	trytond_google_maps
PORTVERSION=	2.4.0
CATEGORIES=	www finance python
MASTER_SITES=	http://downloads2.tryton.org/${PORTVERSION:R}/

MAINTAINER=	matthias@petermann.it
COMMENT=	Tryton Application Platform (Google Maps Module)

LICENSE=	GPLv3

RUN_DEPENDS=	trytond>=2.4.0:${PORTSDIR}/finance/trytond \
		trytond_party>=2.4.0:${PORTSDIR}/finance/trytond_party

USE_PYTHON=	yes
USE_PYDISTUTILS=easy_install

.include <bsd.port.mk>
