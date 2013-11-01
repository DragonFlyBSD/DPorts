# Created by: Sergey Skvortsov <skv@protey.ru>
# $FreeBSD: devel/p5-POE-Component-DebugShell/Makefile 332203 2013-10-31 06:20:32Z vanilla $

PORTNAME=	POE-Component-DebugShell
PORTVERSION=	1.412
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Interactive peeking into a running POE application

BUILD_DEPENDS=	p5-POE>=0:${PORTSDIR}/devel/p5-POE \
		p5-POE-API-Peek>=0:${PORTSDIR}/devel/p5-POE-API-Peek
RUN_DEPENDS:=	${BUILD_DEPENDS}
TEST_DEPENDS=	p5-Test-Distribution>=0:${PORTSDIR}/devel/p5-Test-Distribution

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
