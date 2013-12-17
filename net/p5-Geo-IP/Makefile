# Created by: Yen-Ming Lee <leeym@FreeBSD.org>
# $FreeBSD: net/p5-Geo-IP/Makefile 336020 2013-12-09 19:30:42Z sunpoet $

PORTNAME=	Geo-IP
PORTVERSION=	1.43
CATEGORIES=	net geography perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Gets country name by IP or hostname

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

LIB_DEPENDS=	libGeoIP.so:${PORTSDIR}/net/GeoIP

CONFIGURE_ARGS=	INC="-I${LOCALBASE}/include" LIBS="-L${LOCALBASE}/lib"
USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
