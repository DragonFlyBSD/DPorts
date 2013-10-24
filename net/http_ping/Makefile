# Created by: Dima Dorfman <dd@FreeBSD.org>
# $FreeBSD: net/http_ping/Makefile 330599 2013-10-17 03:41:22Z hrs $

PORTNAME=	http_ping
PORTVERSION=	20050629
PORTREVISION=	1
CATEGORIES=	net www
MASTER_SITES=	http://www.acme.com/software/${PORTNAME}/
DISTNAME=	${PORTNAME}_29jun2005

MAINTAINER=	hrs@FreeBSD.org
COMMENT=	Measure HTTP Latency

USE_OPENSSL=	yes
WRKSRC=		${WRKDIR}/${PORTNAME}
PLIST_FILES=	bin/http_ping man/man1/http_ping.1.gz

.include <bsd.port.mk>
