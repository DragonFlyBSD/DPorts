# Created by: Jim Riggs <ports@christianserving.org>
# $FreeBSD: ports/www/mod_remoteip/Makefile,v 1.6 2012/11/17 06:02:41 svnexp Exp $

PORTNAME=	mod_remoteip
PORTVERSION=	2.3.5.a
CATEGORIES=	www
MASTER_SITES=	${MASTER_SITE_APACHE_HTTPD}
DISTNAME=	httpd-2.3.5-alpha

MAINTAINER=	ports@christianserving.org
COMMENT=	Replaces the client IP address/hostname with that given by a proxy

MAKE_JOBS_SAFE=	yes

USE_APACHE=	22
AP_FAST_BUILD=	yes
AP_GENPLIST=	yes

SRC_FILE=	modules/metadata/${PORTNAME}.c

.include <bsd.port.mk>
