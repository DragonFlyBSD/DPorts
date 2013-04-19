# Created by: Steve Wills <swills@FreeBSD.org>
# $FreeBSD: devel/p5-Test-Aggregate/Makefile 315509 2013-03-29 00:44:53Z eadler $

PORTNAME=	Test-Aggregate
PORTVERSION=	0.364
PORTREVISION=	1
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Aggregate perl tests for better performance

BUILD_DEPENDS=	p5-Test-Most>=0:${PORTSDIR}/devel/p5-Test-Most \
		p5-Test-NoWarnings>=0:${PORTSDIR}/devel/p5-Test-NoWarnings
RUN_DEPENDS=	p5-Test-Most>=0:${PORTSDIR}/devel/p5-Test-Most \
		p5-Test-NoWarnings>=0:${PORTSDIR}/devel/p5-Test-NoWarnings

PERL_CONFIGURE=	yes

MAN3=	Test::Aggregate.3 Test::Aggregate::Base.3 \
	Test::Aggregate::Builder.3 Test::Aggregate::Nested.3

.include <bsd.port.mk>
