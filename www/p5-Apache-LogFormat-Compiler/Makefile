# $FreeBSD: www/p5-Apache-LogFormat-Compiler/Makefile 339488 2014-01-12 09:30:06Z kuriyama $

PORTNAME=	Apache-LogFormat-Compiler
PORTVERSION=	0.22
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	kuriyama@FreeBSD.org
COMMENT=	Perl extension to compile a log format string to perl-code

TEST_DEPENDS=	\
	p5-HTTP-Message>0:${PORTSDIR}/www/p5-HTTP-Message \
	p5-Try-Tiny>0:${PORTSDIR}/lang/p5-Try-Tiny

USES=		perl5
USE_PERL5=	modbuild

.include <bsd.port.mk>
