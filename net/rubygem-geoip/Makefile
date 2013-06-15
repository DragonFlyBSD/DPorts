# $FreeBSD: net/rubygem-geoip/Makefile 319734 2013-06-02 23:43:55Z swills $

PORTNAME=	geoip
PORTVERSION=	1.2.1
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
