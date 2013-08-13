# Created by: Gea-Suan Lin <gslin@gslin.org>
# $FreeBSD: benchmarks/p5-Benchmark-Stopwatch/Makefile 324174 2013-08-02 18:52:07Z mat $

PORTNAME=	Benchmark-Stopwatch
PORTVERSION=	0.05
CATEGORIES=	benchmarks perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	Benchmark
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Simple timing of stages of your code

RUN_DEPENDS=	p5-Clone>=0:${PORTSDIR}/devel/p5-Clone
BUILD_DEPENDS:=	${RUN_DEPENDS}
BUILD_DEPENDS+=	p5-Test-LongString>=0:${PORTSDIR}/devel/p5-Test-LongString

USES=		perl5
USE_PERL5=	configure

MAN3=		Benchmark::Stopwatch.3

.include <bsd.port.mk>
