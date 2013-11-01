# Created by: Sergey Skvortsov <skv@FreeBSD.org>
# $FreeBSD: devel/p5-POE-Component-Logger/Makefile 332203 2013-10-31 06:20:32Z vanilla $

PORTNAME=	POE-Component-Logger
PORTVERSION=	1.10
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	POE logging class

BUILD_DEPENDS=	p5-POE>=1.293:${PORTSDIR}/devel/p5-POE \
		p5-Log-Dispatch>=2.26:${PORTSDIR}/devel/p5-Log-Dispatch \
		p5-Log-Dispatch-Config>=1.03:${PORTSDIR}/devel/p5-Log-Dispatch-Config
RUN_DEPENDS:=	${BUILD_DEPENDS}
TEST_DEPENDS=	p5-Test-NoWarnings>=0:${PORTSDIR}/devel/p5-Test-NoWarnings

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
