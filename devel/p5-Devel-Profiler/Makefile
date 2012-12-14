# New ports collection makefile for:	Devel-Profiler
# Date created:	   09 September 2002
# Whom:		   Sergey Skvortsov <skv@protey.ru>
#
# $FreeBSD: ports/devel/p5-Devel-Profiler/Makefile,v 1.10 2012/11/17 05:56:14 svnexp Exp $
#

PORTNAME=	Devel-Profiler
PORTVERSION=	0.04
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	A Perl profiler compatible with dprofpp

BUILD_DEPENDS=	p5-Time-HiRes>=0:${PORTSDIR}/devel/p5-Time-HiRes
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=		Devel::Profiler.3 Devel::Profiler::Apache.3 \
		Devel::Profiler::Test.3

.include <bsd.port.mk>
