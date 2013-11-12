# Created by: Timur Bakeyev <bat@cpan.org>
# $FreeBSD: converters/p5-Unicode-Stringprep/Makefile 332379 2013-11-01 14:20:56Z vanilla $

PORTNAME=	Unicode-Stringprep
PORTVERSION=	1.104
CATEGORIES=	converters perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Preparation of Internationalized Strings (RFC 3454)

BUILD_DEPENDS=	p5-Unicode-Normalize>=1:${PORTSDIR}/textproc/p5-Unicode-Normalize
RUN_DEPENDS:=	${BUILD_DEPENDS}

TEST_DEPENDS=	p5-Test-NoWarnings>=0:${PORTSDIR}/devel/p5-Test-NoWarnings \
		p5-Test-Pod>=1:${PORTSDIR}/devel/p5-Test-Pod \
		p5-Test-Pod-Coverage>=0:${PORTSDIR}/devel/p5-Test-Pod-Coverage

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
