# Created by: Sunpoet Po-Chuan Hsieh <sunpoet@FreeBSD.org>
# $FreeBSD: devel/p5-Test-Sys-Info/Makefile 325163 2013-08-21 17:42:57Z sunpoet $

PORTNAME=	Test-Sys-Info
PORTVERSION=	0.20
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Centralized test suite for Sys::Info

TEST_DEPENDS=	p5-Test-Pod>=0:${PORTSDIR}/devel/p5-Test-Pod \
		p5-Test-Pod-Coverage>=0:${PORTSDIR}/devel/p5-Test-Pod-Coverage

USE_PERL5=	configure
USES=		perl5

MAN3=		Test::Sys::Info.3 \
		Test::Sys::Info::Driver.3

.include <bsd.port.mk>
