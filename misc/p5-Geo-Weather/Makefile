# New ports collection makefile for:	p5-Geo-Weather
# Date created:				2 August 2001
# Whom:					Pete Fritchman <petef@databits.net>
#
# $FreeBSD: ports/misc/p5-Geo-Weather/Makefile,v 1.16 2012/11/17 05:59:43 svnexp Exp $
#

PORTNAME=	Geo-Weather
PORTVERSION=	1.41
CATEGORIES=	misc perl5 geography
MASTER_SITES=	CPAN \
		ftp://ftp.innercite.com/pub/perl/
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl module to retrieve weather information from weather.com

RUN_DEPENDS=	p5-libwww>=0:${PORTSDIR}/www/p5-libwww

PERL_CONFIGURE=	yes

MAN3=	Geo::Weather.3

.include <bsd.port.mk>
