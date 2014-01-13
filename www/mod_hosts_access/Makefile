# Created by: will
# $FreeBSD: www/mod_hosts_access/Makefile 338168 2013-12-30 20:55:18Z ohauer $

PORTNAME=	mod_hosts_access
PORTVERSION=	1.1.0
PORTREVISION=	1
CATEGORIES=	www
MASTER_SITES=	LOCAL/pgollucci

MAINTAINER=	apache@FreeBSD.org
COMMENT=	Apache module that makes Apache respect hosts.allow and hosts.deny

LICENSE=	APACHE20

USE_APACHE=	22
AP_FAST_BUILD=	yes
AP_GENPLIST=	yes

AP_LIB+=	${LOCALBASE}/lib -lwrap

.include <bsd.port.mk>
