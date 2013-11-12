# Created by: Yen-Ming Lee <leeym@FreeBSD.org>
# $FreeBSD: net/p5-Geo-IP/Makefile 332868 2013-11-05 16:42:55Z vanilla $

PORTNAME=	Geo-IP
PORTVERSION=	1.42
CATEGORIES=	net geography perl5
MASTER_SITES=	CPAN \
		http://www.maxmind.com/download/geoip/api/perl/
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Gets country name by IP or hostname

LIB_DEPENDS=	libGeoIP.so:${PORTSDIR}/net/GeoIP

USES=		perl5
USE_PERL5=	configure
CONFIGURE_ARGS=	LIBS='-L${LOCALBASE}/lib' INC='-I${LOCALBASE}/include'

.include <bsd.port.mk>
