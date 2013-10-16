# Created by: Aaron Dalton <aaron@FreeBSD.org>
# $FreeBSD: net/p5-Net-Whois-ARIN/Makefile 327755 2013-09-20 22:10:23Z bapt $

PORTNAME=	Net-Whois-ARIN
PORTVERSION=	0.12
CATEGORIES=	net perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	ports@FreeBSD.org
COMMENT=	ARIN whois client

TEST_DEPENDS=	p5-Test-MockObject>=0:${PORTSDIR}/devel/p5-Test-MockObject

USES=		perl5
USE_PERL5=	configure

MAN3=		Net::Whois::ARIN.3 \
		Net::Whois::ARIN::AS.3 \
		Net::Whois::ARIN::Contact.3 \
		Net::Whois::ARIN::Customer.3 \
		Net::Whois::ARIN::Network.3 \
		Net::Whois::ARIN::Organization.3

NO_STAGE=	yes
.include <bsd.port.mk>
