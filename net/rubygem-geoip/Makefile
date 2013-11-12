# $FreeBSD: net/rubygem-geoip/Makefile 332047 2013-10-30 02:53:47Z swills $

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
