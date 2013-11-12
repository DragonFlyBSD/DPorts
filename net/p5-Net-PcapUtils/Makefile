# Created by: Sergey Skvortsov <skv@protey.ru>
# $FreeBSD: net/p5-Net-PcapUtils/Makefile 332868 2013-11-05 16:42:55Z vanilla $

PORTNAME=	Net-PcapUtils
PORTVERSION=	0.01
CATEGORIES=	net perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Utility routines for Net::Pcap module

BUILD_DEPENDS=	p5-Net-Pcap>=0:${PORTSDIR}/net/p5-Net-Pcap
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
