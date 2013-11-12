# Created by: Aaron Dalton <aaron@FreeBSD.org>
# $FreeBSD: www/p5-Geo-Caching/Makefile 333084 2013-11-07 12:33:09Z vanilla $

PORTNAME=	Geo-Caching
PORTVERSION=	0.11
PORTREVISION=	1
CATEGORIES=	www perl5 geography
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Object interface for querying Geocaching.com website

BUILD_DEPENDS=	p5-Geo-Cache>=0:${PORTSDIR}/misc/p5-Geo-Cache \
		p5-WWW-Mechanize>=0:${PORTSDIR}/www/p5-WWW-Mechanize \
		p5-Geo-Gpx>=0:${PORTSDIR}/graphics/p5-Geo-Gpx
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
