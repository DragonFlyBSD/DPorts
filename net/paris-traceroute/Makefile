# Created by: dikshie@sfc.wide.ad.jp
# $FreeBSD: net/paris-traceroute/Makefile 327755 2013-09-20 22:10:23Z bapt $

PORTNAME=	paris-traceroute
PORTVERSION=	0.92
PORTREVISION=	1
CATEGORIES=	net
MASTER_SITES=	http://paris-traceroute.net/downloads/
DISTNAME=	${PORTNAME}-${PORTVERSION}-dev

MAINTAINER=	dikshie@sfc.wide.ad.jp
COMMENT=	Paris traceroute is network diagnosis and measurement tools

GNU_CONFIGURE=	yes
USE_GMAKE=	yes
WRKSRC=		${WRKDIR}/${PORTNAME}-current

PLIST_FILES=	bin/paris-traceroute

NO_STAGE=	yes
.include <bsd.port.mk>
