# Created by: Choe, Cheng-Dae
# $FreeBSD: www/mod_webkit/Makefile 316171 2013-04-21 07:53:03Z ohauer $

PORTNAME=	mod_webkit
PORTVERSION=	1.1.1
CATEGORIES=	www
MASTER_SITES=	SF/webware/Webware/1.1.1
DISTNAME=	Webware-${PORTVERSION}

MAINTAINER=	apache@FreeBSD.org
COMMENT=	Apache module for WebWare WebKit AppServer

MAKE_JOBS_SAFE=  yes

USE_APACHE=	22+
AP_FAST_BUILD=	yes
AP_GENPLIST=	yes
AP_EXTRAS=	marshal.c

WRKSRC=		${WRKDIR}/Webware-${PORTVERSION}/WebKit/Adapters/${PORTNAME}2

post-patch:
	@${REINPLACE_CMD} -e 's|/usr/sbin/apxs|${APXS}|' ${WRKSRC}/Makefile

.include <bsd.port.mk>
