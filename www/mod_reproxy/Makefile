# $FreeBSD: www/mod_reproxy/Makefile 327776 2013-09-20 23:36:50Z bapt $

PORTNAME=	mod_reproxy
PORTVERSION=	0.02.20110826
CATEGORIES=	www
MASTER_SITES=	${MASTER_SITE_LOCAL}
MASTER_SITE_SUBDIR=	kuriyama

MAINTAINER=	kuriyama@FreeBSD.org
COMMENT=	Apache module to support x-reproxy-url header

WRKSRC=		${WRKDIR}/lestrrat-mod_reproxy-0f945ff
USE_APACHE=	22+
AP_FAST_BUILD=	yes
AP_GENPLIST=	yes

NO_STAGE=	yes
.include <bsd.port.mk>
