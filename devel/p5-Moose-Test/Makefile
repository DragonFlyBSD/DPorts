# $FreeBSD: ports/devel/p5-Moose-Test/Makefile,v 1.2 2012/11/17 05:56:22 svnexp Exp $

PORTNAME=	Moose-Test
PORTVERSION=	0.01
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:SARTAK
PKGNAMEPREFIX=	p5-

MAINTAINER=	lth@FreeBSD.org
COMMENT=	A Test Runner for the Moose test suite

BUILD_DEPENDS=	p5-Mouse>=0:${PORTSDIR}/devel/p5-Mouse \
		p5-Path-Class>=0:${PORTSDIR}/devel/p5-Path-Class
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=	Moose::Test.3 \
	Moose::Test::Case.3

.include <bsd.port.mk>
