# Created by: ijliao
# $FreeBSD: astro/p5-Astro-ADS/Makefile 315509 2013-03-29 00:44:53Z eadler $

PORTNAME=	Astro-ADS
PORTVERSION=	1.20.7
CATEGORIES=	astro perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	Astro
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	OO Perl interface to the ADS abstract service

BUILD_DEPENDS=	p5-libwww>=0:${PORTSDIR}/www/p5-libwww
RUN_DEPENDS=	p5-libwww>=0:${PORTSDIR}/www/p5-libwww

MAKE_JOBS_SAFE=  yes

PERL_CONFIGURE=	yes

MAN1=	adsquery.1
MAN3=	Astro::ADS.3 Astro::ADS::Query.3 Astro::ADS::Result.3 Astro::ADS::Result::Paper.3

.include <bsd.port.mk>
