# $FreeBSD: devel/p5-Moose-Test/Makefile 341711 2014-01-29 10:57:06Z az $

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

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
