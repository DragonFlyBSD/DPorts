# Created by: Anders Nordby <anders@FreeBSD.org>
# $FreeBSD: comms/p5-Device-Gsm/Makefile 327035 2013-09-12 06:27:41Z az $

PORTNAME=	Device-Gsm
PORTVERSION=	1.60
CATEGORIES=	comms perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	anders@FreeBSD.org
COMMENT=	Perl interface to GSM phones/modems on serial ports

BUILD_DEPENDS=	p5-Device-Modem>=0:${PORTSDIR}/comms/p5-Device-Modem
RUN_DEPENDS=	p5-Device-Modem>=0:${PORTSDIR}/comms/p5-Device-Modem

USES=		perl5
USE_PERL5=	configure

MAN3=		Device::Gsm::Sms.3 Device::Gsm::Pdu.3 Device::Gsm.3

.include <bsd.port.mk>
