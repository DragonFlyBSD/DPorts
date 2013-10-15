# Created by: Sergey Skvortsov <skv@protey.ru>
# $FreeBSD: devel/p5-Devel-Profiler/Makefile 329343 2013-10-04 17:13:12Z az $

PORTNAME=	Devel-Profiler
PORTVERSION=	0.04
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl profiler compatible with dprofpp

BUILD_DEPENDS=	p5-Time-HiRes>=0:${PORTSDIR}/devel/p5-Time-HiRes
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.pre.mk>

.if ${PERL_LEVEL} > 501600
IGNORE=	Devel::DProf has been removed from the Perl core, use Devel::NYTProf instead
.endif

.include <bsd.port.post.mk>
