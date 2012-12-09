# New ports collection makefile for:	bgpq3
# Date created:		27 October 2009
# Whom:			Alexandre Snarskii <snar@snar.spb.ru>
#
# $FreeBSD: ports/net-mgmt/bgpq3/Makefile,v 1.5 2012/11/17 06:00:30 svnexp Exp $
#

PORTNAME=	bgpq3
PORTVERSION=	0.1.12
CATEGORIES=	net-mgmt
MASTER_SITES=	http://snar.spb.ru/prog/bgpq3/
EXTRACT_SUFX=	.tgz

MAINTAINER=	snar@snar.spb.ru
COMMENT=	Lightweight prefix-list generator for Cisco and Juniper routers

MAN8=		bgpq3.8
PLIST_FILES=	bin/bgpq3
HAS_CONFIGURE=	yes

CONFIGURE_ARGS+=--prefix=${PREFIX}

.include <bsd.port.mk>
