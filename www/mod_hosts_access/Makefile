# Created by: will
# $FreeBSD: www/mod_hosts_access/Makefile 327776 2013-09-20 23:36:50Z bapt $

PORTNAME=	mod_hosts_access
PORTVERSION=	1.1.0
PORTREVISION=	1
CATEGORIES=	www
MASTER_SITES=	LOCAL/pgollucci

MAINTAINER=	apache@FreeBSD.org
COMMENT=	Apache module that makes Apache respect hosts.allow and hosts.deny


USE_APACHE=	22
AP_FAST_BUILD=	yes
AP_GENPLIST=	yes

AP_LIB+=	${LOCALBASE}/lib -lwrap

NO_STAGE=	yes
.include <bsd.port.mk>
