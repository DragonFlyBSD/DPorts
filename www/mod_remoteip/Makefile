# Created by: Jim Riggs <ports@christianserving.org>
# $FreeBSD: www/mod_remoteip/Makefile 327776 2013-09-20 23:36:50Z bapt $

PORTNAME=	mod_remoteip
PORTVERSION=	2.3.5.a
CATEGORIES=	www
MASTER_SITES=	${MASTER_SITE_APACHE_HTTPD}
DISTNAME=	httpd-2.3.5-alpha

MAINTAINER=	ports@christianserving.org
COMMENT=	Replaces the client IP address/hostname with that given by a proxy


USE_APACHE=	22
AP_FAST_BUILD=	yes
AP_GENPLIST=	yes

SRC_FILE=	modules/metadata/${PORTNAME}.c

NO_STAGE=	yes
.include <bsd.port.mk>
