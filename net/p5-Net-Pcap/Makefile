# Created by: Sergey Skvortsov <skv@protey.ru>
# $FreeBSD: head/net/p5-Net-Pcap/Makefile 332868 2013-11-05 16:42:55Z vanilla $

PORTNAME=	Net-Pcap
PORTVERSION=	0.17
CATEGORIES=	net perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Interface to pcap(3) LBL packet capture library

RUN_DEPENDS=	p5-IO-Interface>=0:${PORTSDIR}/net/p5-IO-Interface
TEST_DEPENDS=	p5-Socket>=0:${PORTSDIR}/net/p5-Socket \
		p5-Test-Exception>=0:${PORTSDIR}/devel/p5-Test-Exception

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
