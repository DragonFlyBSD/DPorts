# Created by: Pete Fritchman <petef@databits.net>
# $FreeBSD: misc/p5-Geo-Weather/Makefile 327745 2013-09-20 20:50:57Z bapt $

PORTNAME=	Geo-Weather
PORTVERSION=	1.41
CATEGORIES=	misc perl5 geography
MASTER_SITES=	CPAN \
		ftp://ftp.innercite.com/pub/perl/
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl module to retrieve weather information from weather.com

RUN_DEPENDS=	p5-libwww>=0:${PORTSDIR}/www/p5-libwww

USES=		perl5
USE_PERL5=	configure

MAN3=	Geo::Weather.3

NO_STAGE=	yes
.include <bsd.port.mk>
