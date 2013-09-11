# Created by: Jin-Shan Tseng <tjs@cdpa.nsysu.edu.tw>
# $FreeBSD: net/p5-Net-DHCP/Makefile 326486 2013-09-06 10:47:10Z az $

PORTNAME=	Net-DHCP
PORTVERSION=	0.693
CATEGORIES=	net perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	tjs@cdpa.nsysu.edu.tw
COMMENT=	DHCP set of classes designed to handle basic DHCP handling

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

TEST_DEPENDS=	p5-Test-Warn>=0:${PORTSDIR}/devel/p5-Test-Warn

USES=		perl5
USE_PERL5=	modbuild

MAN3=		Net::DHCP::Constants.3 \
		Net::DHCP::Packet.3

.include <bsd.port.mk>
