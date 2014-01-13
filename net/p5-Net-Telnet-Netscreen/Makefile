# Created by: Tsung-Han Yeh <snowfly@yuntech.edu.tw>
# $FreeBSD: net/p5-Net-Telnet-Netscreen/Makefile 338800 2014-01-05 17:15:11Z az $

PORTNAME=	Net-Telnet-Netscreen
PORTVERSION=	1.2
CATEGORIES=	net perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	snowfly@yuntech.edu.tw
COMMENT=	Perl interface for interact with a Netscreen firewall

BUILD_DEPENDS=	p5-Net-Telnet>=0:${PORTSDIR}/net/p5-Net-Telnet
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
