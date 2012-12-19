# $FreeBSD: ports/net/rubygem-geoip/Makefile,v 1.17 2012/11/17 06:00:18 svnexp Exp $

PORTNAME=	geoip
PORTVERSION=	1.1.2
CATEGORIES=	net rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Geoip implementation for rubygems

RUN_DEPENDS=	geoiplookup:${PORTSDIR}/net/GeoIP

USE_RUBY=		yes
USE_RUBYGEMS=		yes
RUBYGEM_AUTOPLIST=	yes

PLIST_FILES=	bin/geoip

.include <bsd.port.mk>
