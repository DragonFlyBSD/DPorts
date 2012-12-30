# New ports collection makefile for:	mod_memcache
# Date created:		2009-01-06
# Whom:			Gea-Suan Lin <gslin@gslin.org>
#
# $FreeBSD: ports/www/mod_memcache/Makefile,v 1.10 2012/11/17 06:02:41 svnexp Exp $
#

PORTNAME=	mod_memcache
PORTVERSION=	0.1.0
PORTREVISION=	4
CATEGORIES=	www
MASTER_SITES=	${MASTER_SITE_GOOGLE_CODE}
PKGNAMEPREFIX=	${APACHE_PKGNAMEPREFIX}

MAINTAINER=	gslin@gslin.org
COMMENT=	Apache 2.2.x module to manage apr_memcache connections

MAKE_JOBS_SAFE=	yes

GNU_CONFIGURE=	yes
PROJECTHOST=	modmemcache
USE_APACHE=	22+

AP_FAST_BUILD=	yes
AP_GENPLIST=	yes
SRC_FILE=	src/${PORTNAME}.c

.include <bsd.port.mk>
