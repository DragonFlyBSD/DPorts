# Created by: Andrea Cervesato <andrea@cervesato.it>
# $FreeBSD: www/mod_qos/Makefile 327776 2013-09-20 23:36:50Z bapt $

PORTNAME=	mod_qos
PORTVERSION=	10.15
CATEGORIES=	www
MASTER_SITES=	SF
MASTER_SITE_SUBDIR= mod-qos
DIST_SUBDIR=	apache2

MAINTAINER=	andrea@cervesato.it
COMMENT=	Qos for Apache


USE_APACHE=	22+
AP_GENPLIST=	yes
AP_FAST_BUILD=	yes

WRKSRC=		${WRKDIR}/${PORTNAME}-${PORTVERSION}/apache2

NO_STAGE=	yes
.include <bsd.port.mk>
