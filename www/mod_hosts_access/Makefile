# Created by: will
# $FreeBSD: ports/www/mod_hosts_access/Makefile,v 1.17 2012/11/17 06:02:41 svnexp Exp $

PORTNAME=	mod_hosts_access
PORTVERSION=	1.1.0
PORTREVISION=	1
CATEGORIES=	www
MASTER_SITES=	LOCAL/pgollucci

MAINTAINER=	apache@FreeBSD.org
COMMENT=	Apache module that makes Apache respect hosts.allow and hosts.deny

MAKE_JOBS_SAFE=	yes

USE_APACHE=	22
AP_FAST_BUILD=	yes
AP_GENPLIST=	yes

AP_LIB+=	${LOCALBASE}/lib -lwrap

.include <bsd.port.mk>
