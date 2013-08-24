# Created by: Sunpoet Po-Chuan Hsieh <sunpoet@FreeBSD.org>
# $FreeBSD: misc/p5-Geo-Coder-Multimap/Makefile 325134 2013-08-21 14:08:06Z sunpoet $

PORTNAME=	Geo-Coder-Multimap
PORTVERSION=	0.01
CATEGORIES=	misc geography perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Geocode addresses with the Multimap Open API

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-JSON>=2:${PORTSDIR}/converters/p5-JSON \
		p5-JSON-XS>=2:${PORTSDIR}/converters/p5-JSON-XS \
		p5-URI>=1.36:${PORTSDIR}/net/p5-URI \
		p5-libwww>=0:${PORTSDIR}/www/p5-libwww
RUN_DEPENDS:=	${BUILD_DEPENDS}

USE_PERL5=	configure
USES=		perl5

MAN3=		Geo::Coder::Multimap.3

.include <bsd.port.mk>
