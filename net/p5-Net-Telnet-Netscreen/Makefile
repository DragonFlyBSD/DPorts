# Created by: Tsung-Han Yeh <snowfly@yuntech.edu.tw>
# $FreeBSD: net/p5-Net-Telnet-Netscreen/Makefile 327755 2013-09-20 22:10:23Z bapt $

PORTNAME=	Net-Telnet-Netscreen
PORTVERSION=	1.2
CATEGORIES=	net perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	snowfly@yuntech.edu.tw
COMMENT=	A Perl interface for interact with a Netscreen firewall

BUILD_DEPENDS=	p5-Net-Telnet>=0:${PORTSDIR}/net/p5-Net-Telnet
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

MAN3=		Net::Telnet::Netscreen.3

NO_STAGE=	yes
.include <bsd.port.mk>
