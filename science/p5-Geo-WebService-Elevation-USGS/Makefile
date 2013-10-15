# Created by: Wen Heping <wen@FreeBSD.org>
# $FreeBSD: science/p5-Geo-WebService-Elevation-USGS/Makefile 327767 2013-09-20 22:48:30Z bapt $

PORTNAME=	Geo-WebService-Elevation-USGS
PORTVERSION=	0.011
CATEGORIES=	science perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:WYANT
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl extension for elevation queries against USGS web services

BUILD_DEPENDS=	p5-HTTP-Message>=0:${PORTSDIR}/www/p5-HTTP-Message \
		p5-XML-Parser>=0:${PORTSDIR}/textproc/p5-XML-Parser \
		p5-libwww>=0:${PORTSDIR}/www/p5-libwww
RUN_DEPENDS=	p5-HTTP-Message>=0:${PORTSDIR}/www/p5-HTTP-Message \
		p5-XML-Parser>=0:${PORTSDIR}/textproc/p5-XML-Parser \
		p5-libwww>=0:${PORTSDIR}/www/p5-libwww

USES=		perl5
USE_PERL5=	configure

MAN3=		Geo::WebService::Elevation::USGS.3

NO_STAGE=	yes
.include <bsd.port.mk>
