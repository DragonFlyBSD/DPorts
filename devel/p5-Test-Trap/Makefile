# Created by: Sunpoet Po-Chuan Hsieh <sunpoet@FreeBSD.org>
# $FreeBSD: devel/p5-Test-Trap/Makefile 325163 2013-08-21 17:42:57Z sunpoet $

PORTNAME=	Test-Trap
PORTVERSION=	0.2.2
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-
DISTNAME=	${PORTNAME}-v${PORTVERSION}

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Trap exit codes, exceptions, output, etc

BUILD_DEPENDS=	p5-Data-Dump>=0:${PORTSDIR}/devel/p5-Data-Dump
RUN_DEPENDS:=	${BUILD_DEPENDS}
TEST_DEPENDS=	p5-Test-Tester>=0.10.7:${PORTSDIR}/devel/p5-Test-Tester

USE_PERL5=	configure
USES=		perl5

MAN3=		Test::Trap.3 \
		Test::Trap::Builder.3 \
		Test::Trap::Builder::PerlIO.3 \
		Test::Trap::Builder::SystemSafe.3 \
		Test::Trap::Builder::TempFile.3

.include <bsd.port.mk>
