# Created by: Steve Wills <steve@mouf.net>
# $FreeBSD: math/p5-Math-SigFigs/Makefile 327032 2013-09-12 05:53:03Z az $

PORTNAME=	Math-SigFigs
PORTVERSION=	1.09
CATEGORIES=	math perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	swills@FreeBSD.org
COMMENT=	Do math with correct handling of significant figures

BUILD_DEPENDS=	p5-Test-Pod>=0:${PORTSDIR}/devel/p5-Test-Pod \
		p5-Test-Pod-Coverage>=0:${PORTSDIR}/devel/p5-Test-Pod-Coverage
RUN_DEPENDS=	p5-Test-Pod>=0:${PORTSDIR}/devel/p5-Test-Pod \
		p5-Test-Pod-Coverage>=0:${PORTSDIR}/devel/p5-Test-Pod-Coverage

USES=		perl5
USE_PERL5=	configure

MAN3=	Math::SigFigs.3

.include <bsd.port.mk>
