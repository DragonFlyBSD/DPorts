# Created by: Sergey Skvortsov <skv@protey.ru>
# $FreeBSD: devel/p5-Devel-Profiler/Makefile 315509 2013-03-29 00:44:53Z eadler $

PORTNAME=	Devel-Profiler
PORTVERSION=	0.04
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl profiler compatible with dprofpp

BUILD_DEPENDS=	p5-Time-HiRes>=0:${PORTSDIR}/devel/p5-Time-HiRes
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=		Devel::Profiler.3 Devel::Profiler::Apache.3 \
		Devel::Profiler::Test.3

.include <bsd.port.mk>
