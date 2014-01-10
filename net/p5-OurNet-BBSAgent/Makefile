# Created by: Gea-Suan Lin <gslin@gslin.org>
# $FreeBSD: net/p5-OurNet-BBSAgent/Makefile 338800 2014-01-05 17:15:11Z az $

PORTNAME=	OurNet-BBSAgent
PORTVERSION=	1.61
CATEGORIES=	net perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	gslin@gslin.org
COMMENT=	Scriptable telnet-based virtual users

BUILD_DEPENDS=	p5-Net-Telnet>=0:${PORTSDIR}/net/p5-Net-Telnet
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
