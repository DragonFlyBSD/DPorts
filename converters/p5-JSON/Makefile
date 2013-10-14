# $FreeBSD: converters/p5-JSON/Makefile 327715 2013-09-20 16:05:24Z bapt $

PORTNAME=	JSON
PORTVERSION=	2.59
CATEGORIES=	converters perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	kuriyama@FreeBSD.org
COMMENT=	Perl extension to convert to JSON (JavaScript Object Notation)

CONFLICTS=	p5-JSON-1.*
USES=		perl5
USE_PERL5=	configure

MAN3=		JSON.3 \
		JSON::backportPP.3 \
		JSON::backportPP::Boolean.3 \
		JSON::backportPP::Compat5005.3 \
		JSON::backportPP::Compat5006.3

NO_STAGE=	yes
.include <bsd.port.mk>
